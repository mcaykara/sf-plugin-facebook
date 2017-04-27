/*
 * SpPlayerParameters.h
 *
 *  Created on: Oct 6, 2011
 *      Author: ugurkilic
 */

#ifndef SPPLAYERPARAMETERS_H_
#define SPPLAYERPARAMETERS_H_

#include "SpDefs.h"
class SpBrString;

class SpPlayerParameters {
public:
	SpPlayerParameters();
    SpPlayerParameters(SpPlayerParameters *playerParameters);
	virtual ~SpPlayerParameters();

public:
    void SetServerName(SpBrString *servername);
    void SetAppName(SpBrString *appname);
    void SetCompanyID(SpBrString *companyid);
    void SetProjectVersion(SpBrString *projectversion);
    void SetHTTPProxyAddress(SpBrString *httpproxyaddress);
    void SetResourceUUID(SpBrString *uuid);
    void SetUserUUID(SpBrString *uuid);
    void SetServiceID(int serviceid);
    void SetAppUID(int appuid);
    void SetDesignScreenW(int designscreenw);
    void SetDesignScreenH(int designscreenh);
    void SetPortValue(int p);
    void SetProxyPort(int proxyport);
    void SetMaxDemandLimit(int maxdemandlimit);
    void SetFontRef(int fontref);
    void SetFacebookAppID(SpBrString *fbAppid);
    void SetFacebookAppSecret(SpBrString *fbAppsecret);
    void SetTwitterConsumerKey(SpBrString *twConsumerKey);
    void SetTwitterConsumerSecret(SpBrString *twConsumerSecret);
    void SetAndroidMapKey(SpBrString *androidmapkey);
    void SetAndroidGeocodingKey(SpBrString *androidgeocodingkey);
    void SetiOSGeocodingKey(SpBrString *iosgeocodingkey);
    void SetAdMobPublisherId(SpBrString *adMobPublisherId);
    void SetAllowedOrientations(unsigned int options);
    void SetAdMobTestUsage(bool admobtestusage);
    void SetAndroidInAppBillingPublicKey(SpBrString* publickey);
    void SetAndroidNotificationSenderID(SpBrString* senderID);
    void SetDesignScreenDpi(int dpi);
    void SetLicenceType(TLicenceType l);
    void SetMaxCacheSize(long long size);

    SpBrString* GetServerName();
    SpBrString* GetAppName();
    SpBrString* GetCompanyID();
    SpBrString* GetProjectVersion();
    SpBrString* GetHTTPProxyAddress();
    SpBrString* GetResourceUUID();
    SpBrString* GetUserUUID();
    SpBrString* GetApplicationID();
    SpBrString* GetFacebookAppID();
    SpBrString* GetFacebookAppSecret();
    SpBrString* GetTwitterConsumerKey();
    SpBrString* GetTwitterConsumerSecret();
    SpBrString* GetAndroidMapKey();
    SpBrString* GetAndroidGeocodingKey();
    SpBrString* GetiOSGeocodingKey();
    SpBrString* GetAdMobPublisherId();
    SpBrString* GetAndroidInAppBillingPublicKey();
    SpBrString* GetAndroidNotificationSenderID();
    unsigned int GetAllowedOrientations();
    bool GetAdMobTestUsage();

    int GetServiceID();
    int GetAppUID();
    int GetDesignScreenW();
    int GetDesignScreenH();
    int GetPort();
    int GetProxyPort();
    int GetMaxDemandLimit();
    int GetFontRef();
    int GetDesignScreenDpi();
    TLicenceType GetLicenceType();
    long long GetMaxCacheSize();

private:
    SpBrString *serverName;
    SpBrString *appName;
    SpBrString *companyID;
    SpBrString *projectVersion;
    SpBrString *httpProxyAddress;
    SpBrString *ResourceUUID;
    SpBrString *UserUUID;
    SpBrString *facebookAppID;
    SpBrString *facebookAppSecret;
    SpBrString *twitterConsumerKey;
    SpBrString *twitterConsumerSecret;
    SpBrString *androidMapKey;
    SpBrString *androidGeocodingKey;
    SpBrString *iOSGeocodingKey;
    SpBrString *adMobPublisherId;
    SpBrString *androidInAppBillingPublicKey;
    SpBrString *androidNotificationSenderID;

    TLicenceType licenceType;
    bool adMobTestUsage;
    int serviceID;
    int appUID;
    int designScreenWidth;
    int designScreenHeight;
    int designScreenDpi;
    int port;
    int proxyPort;
    int maxDemandLimit;
    int fontRef;
    unsigned int allowedOrientations;
    long long maxCacheDataSize;
};

#endif /* SPPLAYERPARAMETERS_H_ */
