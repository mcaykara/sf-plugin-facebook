#include "SpBrString.h"
#include "SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

#ifdef TARGET_PLATFORM_ANDROID
class SpBrNuiActionMenuItem{
private:
	SpBrString * id;
	SpBrString * title;
	SpBrString * icon;
	int showAsAction;
	int visible;
	SpJsObject jsObjectRef;
public:
	SpBrNuiActionMenuItem();
	~SpBrNuiActionMenuItem();
	void Invalidate();
	const SpBrString* GetIcon() const;
	void SetIcon(SpBrString* icon);
	const SpBrString* GetId() const;
	void SetId(SpBrString* id);
	int GetShowAsAction() const ;
	void SetShowAsAction(int showAsAction);
	const SpBrString* GetTitle() const;
	void SetTitle(SpBrString* title);
	int GetVisible() const;
	void SetVisible(int visible);
	void FireOnSelectedEvent();
public:
	void CreateJSObject(bool protect = true);
	void SetJSObjectRef(SpJsObject objRef);
	void UnloadJSObjectRef();
	SpJsObject GetJSObjectRef();
public:
	SpJsObject onSelectedEvent;
	jobject jniObjectRef;
};
#endif
