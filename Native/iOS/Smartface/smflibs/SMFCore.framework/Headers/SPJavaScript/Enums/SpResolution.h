//
//  SpJSResolution.h
//
//  Created by adem on 26.03.2013 -- 5.
//

#ifndef __SpratIOS__SpJSResolution__
#define __SpratIOS__SpJSResolution__

#include "Core/SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"

/**
 *
SMF.Multimedia.Resolution.small
SMF.Multimedia.Resolution.medium
SMF.Multimedia.Resolution.large

 */


SpJsInit (smfresolution);

SpJsHasProperty (smfresolution);

SpJsGetProperty (smfresolution);

SpJsSetProperty (smfresolution);

int smfresolution_jsvalue_convert(SpJsValue value,bool &success);

SpJsGetPropertyNames (smfresolution);


extern const SpJsClassDefinition smfresolution_def;

#endif /* defined(__SpratIOS__SpJSMapType__) */
