/*
 * SpAsyncEventHandler.h
 *
 *  Created on: dec 9, 2011
 *      Author: adem
 */

#ifndef SPASYNCACTIONHANDLER_H_
#define SPASYNCACTIONHANDLER_H_

#include "SpDefs.h"
#include "SpBrParcelable.h"
#ifdef TARGET_PLATFORM_WINDOWS
#include "pthread.h"
#else
#include <pthread.h>
#endif

class SpAsyncActionHandler {
public:
	SpAsyncActionHandler();
	~SpAsyncActionHandler();
	void Start();
	bool IsActive();
	void SetActive(bool val);
    void DoPerformAction(SpBrParcelable* myObject);
    pthread_t GetThreadId() { 
        return thread_id; 
    }
private:
	pthread_t thread_id;
    pthread_mutex_t taskLock;
	bool active;
};

#endif /* SPASYNCEVENTHANDLER_H_ */
