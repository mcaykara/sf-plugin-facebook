/*
 * SpNetworkObject.h
 *
 *  Created on: Sep 3, 2013
 *      Author: ugurkilic
 */

#ifndef SPNETWORKOBJECT_H_
#define SPNETWORKOBJECT_H_

#include <vector>

#include "SpBrParcelable.h"
#include "SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

class SpDataSource;
class SpBrString;
class SmfHttpHandler;

class SpNetworkObject: public SpBrParcelable {
public:
	SpNetworkObject();
	virtual ~SpNetworkObject();

public:
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    bool IsCurrentOperationCancelled();
    void SetCurrentOperation(SmfHttpHandler *httpHandler);
    void CancelCurrentOperation();
    void AddRequestHeader(SpBrString *keyValueEntry);
    void ClearRequestHeader();

    SpBrString* GetResponseText();
    int GetMaxReceiveCount();
    bool GetAddUserInfo();
    void SetMaxReceiveCount(int m);
    void SetAddUserInfo(bool a);
    int GetTimeOutInterval();
    void SetTimeOutInterval(int);

public:
    std::vector<SpBrString *> dynamicRequestHeaders;
    SpDataSource *dynamicResultDatasource;

    SpJsValue receivedHeadersArray;
    int responseCode;
    SpBrString* responseErrorMessage;
    bool ignoreSSLErrors;

protected:
    int iTimeOutInterval, timeOutInterval;
    int iMaxReceiveCount, maxReceiveCount;
    SpBrString* responseText;
    pthread_mutex_t runLock;
    bool addUserInfo;

private:
    SmfHttpHandler *currentOperation;
};

#endif /* SPNETWORKOBJECT_H_ */
