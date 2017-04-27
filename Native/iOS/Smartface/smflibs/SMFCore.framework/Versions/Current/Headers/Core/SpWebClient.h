
#ifndef SPWEBCLIENT_H_
#define SPWEBCLIENT_H_

class SpBrBase;
class SpContext;
class SpBrString;
#include <vector>
#include <map>
#include "SpNetworkObject.h"
#include "SpDefs.h"

namespace Smf {
class SpFile;
}
using Smf::SpFile;
class SmfBlob;
class SmfFormData;

class SpWebClient: public SpNetworkObject {
public:
    static const char *SupportedHTTPMethods[];
    
public:
	SpWebClient(SpBrBase* base, SpContext* context);
	virtual ~SpWebClient();
public:
    void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void Reset(bool invalidate = true);
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    SpBrString* GetReceivedFile();
    SpBrString* GetResponseFile();
    SpBrString* GetRequestFile();
    void SetReceivedFile(SpBrString* value);
    void SetRequestFile(SpBrString* value);
    
    void SetRequestBlob(SmfBlob *value);
    SmfBlob* GetRequestBlob();
    SmfBlob* GetResponseBlob();
    
    void SetRequestFormData(SmfFormData *value);
    SmfFormData* GetRequestFormData();

	void Cancel();
public:
    void RunWebClient();
private:
    SpContext *context;
private:
    SpBrString* proxy;
    SpBrString* url;
    SpBrString* iUrl;
    SpBrString* contentType;
    SpBrString* requestContentType;
    SpBrString* iContentType;
    SpBrString* manualRequestString;
    SpBrString* lastRequestString;
    
    std::vector<SpBrString*> sendingKeys;
    std::vector<SpBrString*> sendingURLKeys;
    std::vector<SpBrString*> sendingHeaderKeys;
    std::vector<SpBrString*> receivingXPaths;
    std::vector<SpBrString*> sampleRequestParts;
    std::vector<SpBrString*> receivingHeadersKeys;
    std::vector<SpBrString *> parentXPathElements;
    std::vector<bool> isRepeatElementList;
    
    std::vector<SpBrParcelable*> sendingValues;
    std::vector<SpBrParcelable*> sendingURLValues;
    std::vector<SpBrParcelable*> sendingHeaderValues;
    std::vector<SpBrParcelable*> receivingDataBridges;
    std::vector<SpBrParcelable*> receivingHeadersDataBridges;
    
    SpBrString *newHTTPMethod, *iNewHTTPMethod;
    
    SpBrString* receiveFile;
    SpBrString* requestFile;
    SmfBlob *requestBlob;
    SmfBlob *responseBlob;
    SmfFormData *requestFormData;
    SpBrString* responseFile;
    SpFile* GetGeneratedFile(SpBrString* url);

	bool canceled;

public:
    bool autoFileSave;
    
};
#endif
