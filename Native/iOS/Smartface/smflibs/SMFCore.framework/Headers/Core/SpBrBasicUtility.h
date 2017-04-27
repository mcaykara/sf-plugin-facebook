/*
 * SpBrBasicUtility.h
 *
 *  Created on: 21 Sep 2011
 *      Author: ugur
 */

#ifndef SPBRBASICUTILITY_H
#define SPBRBASICUTILITY_H

#include "SpDefs.h"
#include <string>
#include <string>

class SpBrString;
class SpBrNuiBase;
class SpUtSize;
class SpDataSource;
class SpBrBase;

class SpBrBasicUtility {
public:
	SpBrBasicUtility();
	virtual ~SpBrBasicUtility();

public:
#ifdef TARGET_PLATFORM_IOS
    static void LoadAllLocalFonts();
    static int GetContentMode(int drawMode, int drawPosition);
    static void* CreateBackgroundImage(int width, int height, SpBrString *imageName, int drawMode, int drawPosition);
    static bool startSes(SpBrString* sesKey , SpBrString* sesUrl,bool fromUser=false);
    static bool stopSes(bool fromUser=false);
    static bool sendEvent(SpBrString* eventName, SpBrString* eventDirection);
    static bool sendCustomer(SpBrString* name, SpBrString* surName,SpBrString* mail, SpBrString* phone , SpBrString* customer ,SpBrString* jCustomParams);
    static void checkUpdate();
    static bool isLoggingEnabled();
    static void setLoggingEnabled(bool value);

    static char* getUpdateExists();
    static char* getLatestVersion();
    static char* getDownloadUrl();
    static char* getIsMondatory();
    static int getCode();
    static char* getCodeDescription();
    static void registerDeviceToken(SpBrString* token);
#endif
    static bool XPathEquals(SpBrString *xpathString, const char* c);
    static char* GetNumericValueOfStringForMask(SpBrString *mask, SpBrString *text);
    static char* GetPhoneValueOfStringForMask(SpBrString *mask, SpBrString *text);
    static char* GetCurrencyValueOfStringForMask(SpBrString *mask, SpBrString *text, int decimalSeperator);
    static char* GetDateMask(SpBrString *mask, SpBrString *text);
    static void* GetTiledImage(void* image, void* object);
    static void* GetNativeFont(SpBrString* fntName, int fntSize);
    static char* UrlDecode(char* url);
    static char* HtmlSpecialChars(char* data);
    static SpDataSource* GetJavaScriptFile(SpBrBase* baseData, const char* filename);

    static SpUtSize GetSizeOfImage(SpBrString *imageName);
    static int ResolveRFC2822DateString(const char* dateString,int len);
    static bool HasProtocol(const char* uri);
    static bool HasImagePrefix(const char* uri);

    static std::string escapeJsonString(const std::string& input);
    static std::string GetDeviceName();
    static std::string GetDeviceOS();
	static double CharsToDouble(char* chars);
};

#endif /* SPBRBASICUTILITY_H */
