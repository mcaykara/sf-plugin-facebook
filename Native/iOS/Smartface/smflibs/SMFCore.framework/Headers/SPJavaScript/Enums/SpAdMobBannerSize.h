//
//  SpJSAdMobBannerSize.h
//
//  Created by adem on 26.03.2013 -- 5.
//

#ifndef __SpratIOS__SpJSAdMobBannerSize__
#define __SpratIOS__SpJSAdMobBannerSize__

#include "Core/SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"

/**
 *

SMF.UI.Android.AdMobBannerSize.fullsizeBanner
SMF.UI.Android.AdMobBannerSize.leaderboard
SMF.UI.Android.AdMobBannerSize.mediumRectangle
SMF.UI.Android.AdMobBannerSize.standardBanner

 */


SpJsInit (smfadmobbannersize);

SpJsHasProperty (smfadmobbannersize);

SpJsGetProperty (smfadmobbannersize);

SpJsSetProperty (smfadmobbannersize);

int smfadmobbannersize_jsvalue_convert(SpJsValue value,bool &success);

SpJsGetPropertyNames (smfadmobbannersize);

extern const SpJsClassDefinition smfadmobbannersize_def;

#endif /* defined(__SpratIOS__SpJSMapType__) */
