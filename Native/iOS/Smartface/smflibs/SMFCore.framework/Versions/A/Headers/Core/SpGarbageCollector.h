/**
 *
 *	garbace collector for smartface object.
 *
 *	it is used by android default. but it can be used for another platforms.
 *
 *	it s aim is keepeing last 5 deleted object in stack but delete all other objects.
 *
 *	it works async with one thread.
 *
 *	@author adem
 */

#include "SpDefs.h"
#include "SpBrParcelable.h"
#include <vector>

class SpGarbageCollector
{
private:
	std::vector<SpBrParcelable*> willDeleteObjects;
	static SpGarbageCollector* instance;
	pthread_t threadId;
	pthread_mutex_t mutex;
	pthread_mutex_t cvMutex;
	pthread_cond_t cv;

public:
	SpGarbageCollector();
	~SpGarbageCollector();
	static SpGarbageCollector* GetInstance();
	void Delete(SpBrParcelable* object);
	void Check();
};
