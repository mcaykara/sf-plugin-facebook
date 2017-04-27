//
//  SpJSmediatype.h
//
//  Created by adem on 26.03.2013 -- 5.
//

#ifndef __SpratIOS__SpJSmediatype__
#define __SpratIOS__SpJSmediatype__

#include "SpJsEngine/Core/SpJsEngine.h"

/**
 *
 *
SMF.Multimediatype.mediatype.front
SMF.Multimediatype.mediatype.rear

 */


SpJsInit (smfmediatype);

SpJsHasProperty (smfmediatype);

SpJsGetProperty (smfmediatype);

SpJsSetProperty (smfmediatype);

int smfmediatype_jsvalue_convert(SpJsValue value,bool &success);

SpJsGetPropertyNames (smfmediatype);

extern const SpJsClassDefinition smfmediatype_def;

#endif /* defined(__SpratIOS__SpJSMapType__) */
