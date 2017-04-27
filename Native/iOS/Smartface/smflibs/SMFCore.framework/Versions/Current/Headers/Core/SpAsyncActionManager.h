/*
 * SpAsyncEventManager.h
 *
 *  Created on: dec 9, 2011
 *      Author: adem
 */

#ifndef SPASYNCACTIONMANAGER_H_
#define SPASYNCACTIONMANAGER_H_

#include "SpDefs.h"
#include "SpBrParcelable.h"
#include <queue>
#ifdef TARGET_PLATFORM_WINDOWS
#include "pthread.h"
#else
#include <pthread.h>
#endif

#define ASYNC_ACTION_HANDLER_COUNT 3

class SpAsyncActionHandler;

class SpAsyncActionManager {
public:
	SpAsyncActionManager();
	~SpAsyncActionManager();
    static SpAsyncActionManager* GetInstance();
    static void ClearInstance();
    void AddWebObject(SpBrParcelable* object);
    SpBrParcelable* GetNextWebObject();
	void WebObjectPerformed(SpBrParcelable*);
private:
    std::queue<SpBrParcelable*> objectQueue;
	std::vector<SpBrParcelable*> objectsInAction;
    pthread_mutex_t webQueueLock;
    SpAsyncActionHandler* handlers[ASYNC_ACTION_HANDLER_COUNT];
	pthread_cond_t cv;
	bool active;
};

#endif /* SPASYNCEVENTMANAGER_H_ */
