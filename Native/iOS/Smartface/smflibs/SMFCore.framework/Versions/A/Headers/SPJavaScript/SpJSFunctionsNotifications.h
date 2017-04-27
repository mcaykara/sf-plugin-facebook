//
//  SpJSNotifications.h
//  SpratIOS
//
//  Created by adem on 28/12/12.
//

#ifndef __SpratIOS__SpJSFunctionsNotifications__
#define __SpratIOS__SpJSFunctionsNotifications__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

	/**
	 * static Notifications.setNotification (fireDate, alertMessage, title, repeatInterval, alertText, sound, notificationID, badgeNumber,OnSuccess,OnFailure )
	 * static Notifications.cancelNotification (notificationID, allNotifications)
	 * static Notifications.presentNotification (notificationID)
	 * static Notifications.setBadgeNumber (badgeNumber)
	 * static Notifications.getBadgeNumber (badgeNumber)
	 * static Notifications.registerForPushNotifications (OnSuccess,OnFailure)
	 *
	 */
SpJsFunction (cb_notifications_setNotification);

SpJsFunction (cb_notifications_cancelNotification);

SpJsFunction (cb_notifications_presentNotification);

SpJsFunction (cb_notifications_setBadgeNumber);

SpJsFunction (cb_notifications_getBadgeNumber);

SpJsFunction (cb_notifications_registerForPushNotifications);

SpJsFunction (cb_notifications_clearAll);

#ifdef TARGET_PLATFORM_ANDROID

SpJsFunction (cb_notifications_setCustomNotificationKeys);

#endif

#endif /* defined(__SpratIOS__SpJSNavigationBar__) */
