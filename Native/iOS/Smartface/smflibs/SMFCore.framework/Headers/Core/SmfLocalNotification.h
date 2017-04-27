//
//  SmfLocalNotification.h
//  Smartface
//
//  Created by Ugur Kilic on 05/11/2014.
//

#ifndef __SMF_LOCALNOTIFICATION__
#define __SMF_LOCALNOTIFICATION__

#include <map>
#include <string>
#include <vector>
#include "SpBrString.h"
#include "SpJsEngine/Core/SpJsEngine.h"

#ifdef TARGET_PLATFORM_ANDROID
#include "NotificationActionObject.h"
#include "SPJavaScript/SpJSCommon.h"
#endif

class SmfLocalNotification {
public:
    SmfLocalNotification();
    ~SmfLocalNotification();

public:
    double dateMilliseconds;
    char *alertBody;
    char *launchImage;
    char *sound;
    char *alertAction;
    std::map<std::string, std::string> userInfoMap;
    int applicationIconBadgeNumber;
    int repeatInterval;
    bool hasAction;

#ifdef TARGET_PLATFORM_ANDROID
    int id;
    SpBrString* alertTitle;
    SpBrString* smallIcon;
    bool autoCancel;
    int number;
    double when;
    bool usesChronometer;
    bool vibrate;
    SpBrString* ticker;
    SpBrString* subText;
    int priority;
    SpJsObject  progress;
    SpBrString* bigText;
    SpBrString* bigPicture;
#endif
};

#endif /* __SMF_LOCALNOTIFICATION__ */
