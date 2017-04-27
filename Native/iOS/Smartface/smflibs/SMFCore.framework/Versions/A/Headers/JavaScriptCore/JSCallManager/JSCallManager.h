/**
 *
 *	JSCallWorker for call javascript call in same thread.
 *
 *	@author adem
 */
#include "Core/SpDefs.h"
#include "Core/SpBrParcelable.h"
#include <list>
#include <vector>
#include <map>
#include <stdlib.h>

class SpBrNuiContainer;

class JSCallObject {
private:
public:

	SpEvent* event;
    char *argumentString;
    SpBrParcelable *sourceObject;
    PropertyDict *argDict;
    SpEventGroup* eg;

	char* jsCode;
	SpJsObject thisObject;
	char *sourceId;

	SpJsObject object;
	size_t argumentCount;
	SpJsValue* arguments;

	pthread_cond_t callCv;
	pthread_mutex_t callMutex;
	SpJsValue returnVal;
	std::string desc;
	bool flagDebug;
	SpBrNuiContainer* view;


	int calltype;
	JSCallObject(){
        sourceObject = NULL;
        argDict = NULL;
        eg = NULL;

		event = 0;
		jsCode = 0;
		// TODO(ewanas) this won't work in V8. Disabling for now
		// thisObject = 0;
		sourceId = 0;
		// TODO(ewanas) this won't work in V8. Disabling for now
		// object = 0;
		argumentCount = 0;
		arguments = 0;
		calltype = 0;
		view = 0;
        pthread_mutex_init(&callMutex, NULL);
        pthread_cond_init(&callCv, NULL);
	}
};


class JSCallManager
{
private:
	std::list<JSCallObject*> willCalledObjects;
	std::vector<std::string> callChainLog;
	pthread_t threadId;
	pthread_mutex_t mutex;
	pthread_mutex_t cvMutex;
	pthread_cond_t cv;
	bool active;
public:
    static JSCallManager* instance;
	JSCallManager();
	~JSCallManager();
	static JSCallManager* GetInstance();
	void Start();
#ifdef DEBUG_JSSCHEDULER
    void PushSynchronousEvent(SpEventGroup* eg, SpEvent* event, char *argumentString, SpBrParcelable *sourceObject, PropertyDict *argDict,std::string desc);
    void PushEvent(SpEventGroup* eg, SpEvent* event, char *argumentString, SpBrParcelable *sourceObject, PropertyDict *argDict,std::string desc);
	SpJsValue PushJavaScriptCall(const char *jsCode,SpJsObject thisObject, const char *sourceId,std::string desc);
	SpJsValue PushCallback(SpJsObject object, SpJsObject thisObject, size_t argumentCount, const SpJsValue arguments[],std::string desc);
	void PushFunctionAsync(SpJsObject object, SpJsObject thisObject, size_t argumentCount, const SpJsValue arguments[], std::string desc);
#else
    void PushSynchronousEvent(SpEventGroup* eg, SpEvent* event, char *argumentString, SpBrParcelable *sourceObject, PropertyDict *argDict);
    void PushEvent(SpEventGroup* eg, SpEvent* event, char *argumentString, SpBrParcelable *sourceObject, PropertyDict *argDict);
	SpJsValue PushJavaScriptCall(const char *jsCode,SpJsObject thisObject, const char *sourceId);
	SpJsValue PushCallback(SpJsObject object, SpJsObject thisObject, size_t argumentCount, const SpJsValue arguments[]);
	void PushFunctionAsync(SpJsObject object, SpJsObject thisObject, size_t argumentCount, const SpJsValue arguments[]);
#endif
	void PushInvalidate(SpBrNuiContainer* view);
	void ProcessObject(JSCallObject* objectToCall);
	void Check();
};
