//
//  SmfHttpHandler.h
//  Sprat
//
//  Created by Antti on 8/18/11.
//  Copyright 2011 Bivium. All rights reserved.
//

#ifndef SmfHttpHandler_H_
#define SmfHttpHandler_H_

#include "SpDefs.h"

//#ifdef TARGET_PLATFORM_ANDROID
#include "SpEventGroup.h"
#include "curl/curl.h"
#include "SpBrResourceManager.h"

class SpBrString;
class SpNetworkObject;

class SmfHttpHandler
{
public:
	SmfHttpHandler();
	~SmfHttpHandler();
    char* getURLData(SpBrString* URL, SpBrString* proxy,int &len, int& statusResponse,SpBrString** responseErrorString,  SpBrString* requestBody = 0,SpBrString* requestFile=0 ,SmfBlob* blobFile = NULL ,std::vector<char*> *headers=NULL,std::vector<char*> *returnHeaders=NULL,const char *httpMethod = NULL, int timeOutSeconds = KDefaultWebTimeOutValue);
    void doRequest(SpBrString* URL, bool async, SpBrString* method, SpEventGroup * eventGroup, SpBrParcelable* dstObj, SpBrString* dstParam);
    SpNetworkObject *networkObject;
    bool isNetworkOperationCancelled;
    bool requireSSLCerts;

private:
    CURL *handle;
};
static void* curl_request(void * params);
size_t recv_curl_data(void *buffer, size_t size, size_t nmemb, void *userp);
size_t send_curl_data(void *ptr, size_t size, size_t nmemb, void *userp);
int progress_function(SpNetworkObject* netObject, double t, /* dltotal */ double d, /* dlnow */ double ultotal, double ulnow);


#endif /* SpActionPERFORMER_H_ */
//#endif
