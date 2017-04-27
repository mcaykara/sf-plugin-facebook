/*
 * SpAsyncImageDownloader.h
 *
 *  Created on: 2013 04 18
 *      Author: adem
 */

#ifndef SPASYNCIMAGEDOWNLOADER_H_
#define SPASYNCIMAGEDOWNLOADER_H_

#include "SpDefs.h"
#include "SpBrParcelable.h"
#include <vector>
#ifdef TARGET_PLATFORM_WINDOWS
#include "pthread.h"
#else
#include <pthread.h>
#endif

#define ASYNC_IMAGE_DOWNLOADER_COUNT 5

#include <vector>
#include "SpBrNuiImageView.h"
class SpBrString;
class SpAsyncImageDownloader;

typedef struct downloadImageAsyncTask
{
	SpAsyncImageDownloader* obj;
	SpBrString* path;
	int thread_index;
	bool cachedEnabled;
} DownloadImageAsyncTask;

void* DownloadImageAsync(void* data);

class SpAsyncImageDownloader {
public:
	SpAsyncImageDownloader();
	~SpAsyncImageDownloader();
    static SpAsyncImageDownloader* GetInstance();
    void ObjectDeleted(SpBrNuiImageView* imageView);
    void Download(SpBrNuiImageView* imageView,SpBrString* imagePath);
    void CancelDownload(SpBrNuiImageView* imageView);
    void Downloaded(bool cacheEnabled, SpBrString* downloadedPath,bool alreadyLocked, bool success = false);
    void CheckQueueForProcessing(bool fromNetwork);
    void FreeThreadSlot(int index);
    static char* GenerateFileName(bool cached, const char* url);
public:
    pthread_mutex_t lock_for_cache;

private:
    static SpAsyncImageDownloader* instance;
    std::vector<SpBrNuiImageView*> imageObjectsQueue;
    std::vector<SpBrString*> imagePathsQueue;
    SpBrString* runningThreads[ASYNC_IMAGE_DOWNLOADER_COUNT];
    pthread_t thread_id[ASYNC_IMAGE_DOWNLOADER_COUNT];
    pthread_mutex_t lock;
    pthread_mutex_t lock_for_slots;

};


#endif /* SPASYNCEVENTMANAGER_H_ */
