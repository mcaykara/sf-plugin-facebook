//
//  SpJSCameraType.h
//
//  Created by adem on 26.03.2013 -- 5.
//

#ifndef __SpratIOS__SpJSCameraType__
#define __SpratIOS__SpJSCameraType__

#include "SpJsEngine/Core/SpJsEngine.h"

/**
 *
 *
SMF.Multimedia.CameraType.front
SMF.Multimedia.CameraType.rear

 */


SpJsInit (smfcameratype);

SpJsHasProperty (smfcameratype);

SpJsGetProperty (smfcameratype);

SpJsSetProperty (smfcameratype);

int smfcameratype_jsvalue_convert(SpJsValue value,bool &success);

SpJsGetPropertyNames (smfcameratype);

extern const SpJsClassDefinition smfcameratype_def;

#endif /* defined(__SpratIOS__SpJSMapType__) */
