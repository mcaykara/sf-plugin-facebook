/*
 * SpBrResourceManager.h
 *
 *  Created on: Jul 27, 2011
 *      Author: antti
 */

#ifndef SPBRRESOURCEMANAGER_H_
#define SPBRRESOURCEMANAGER_H_

#include "SpDefs.h"
#include "SpContext.h"
#include "SpDataSource.h"
#include "SpHttpRequest.h"
#include "SpHttpResponse.h"
#include <pthread.h>
#ifdef TARGET_PLATFORM_ANDROID
#include "SpAPKRead.h"
#endif

class SpBrResourceManager;
class SpDataSet;
class SpNetworkObject;

static SpBrResourceManager *resourceManager = NULL;

class SpBrResourceManager {
public:
	SpBrResourceManager();
	~SpBrResourceManager();

    static SpBrResourceManager* getInstance();
    void Initialize(SpContext* context);

    SpDataSource* GetWritableDataSource(SpBrString* URL);

    SpDataSource* GetDataSource(SpBrString* URL, SpNetworkObject* netObj = NULL, SpBrString* requestString = NULL, std::vector<char *> *headers = NULL, std::vector<char *> *returnHeaders = NULL,const char *httpMethod = "GET", int timeoutSeconds = KDefaultWebTimeOutValue);
    SpHttpResponse* Request(SpHttpRequest* request);

    SpDataSource* GetImageDataSource(SpBrString* URL);

    /**
	 * it must give data.smf that in resource's data.smf(from apk/bundle). not in document folder. data.smf might be in document after ui update.
	 * for this case, still it must give resouce's data.smf
	 *
	 *
	 * @author adem.cayir
	 */
	SpDataSource* GetResourceDataSmf();

    void CancelAllRequests();

    time_t initTime;
	int networkResourceCount;
	int logToFileCount;

public:
#ifdef TARGET_PLATFORM_IOS
    std::vector<void*> httpHandlers;
    void *dataContents;
#endif

#ifdef TARGET_PLATFORM_ANDROID
	SpAPKRead* apkReader;
#endif
};

#endif /* SPBRRESOURCEMANAGER_H_ */
