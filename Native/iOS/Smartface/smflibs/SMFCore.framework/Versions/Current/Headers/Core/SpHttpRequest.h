
#ifndef __SPHTTPREQUEST_H__
#define __SPHTTPREQUEST_H__

#include "SpNetworkObject.h"
#include "SpBrString.h"
#include "SmfBlob.h"


class SpHttpRequest
{
private:
	SpBrString* url;
	SpBrString* proxy;
	SpNetworkObject* netObj;
	SpBrString* postString;
	SpBrString* postFilePath;
    SmfBlob* blobFile;
	std::vector<std::string> headers;
	SpBrString* httpMethod;
	int timeout;
public:
	SpHttpRequest(const char* url);
	virtual ~SpHttpRequest();
	void SetNetworkObject(SpNetworkObject* netObj);
	SpNetworkObject* GetNetworkObject();
	void SetPostString(SpBrString* data);
	void SetPostFile(SpBrString* filepath);
    void SetPostBlobFile(SmfBlob* file);
	SpBrString* GetPostFile();
    SmfBlob* GetBlobFile();
	void AddHeader(const char* header);
	std::string GetHeader(int index);
	int GetHeaderSize();
	void SetHTTPMethod(const char* method);
	void SetTimeout(int timeout);
	SpBrString* URL();
	SpBrString* HTTPMethod();
	int GetTimeout();
	SpBrString* GetPostString();
	void SetProxy(SpBrString* p);
	SpBrString* GetProxy();
};

#endif
