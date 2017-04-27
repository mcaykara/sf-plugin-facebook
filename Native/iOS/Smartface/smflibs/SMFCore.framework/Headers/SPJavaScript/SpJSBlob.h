//
//  SpJSBlob.h
//  Smartface
//
//  Created by Ugur Kilic on 8/12/14.
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#ifndef __SMARTFACE_SPJSBLOB__
#define __SMARTFACE_SPJSBLOB__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsHasProperty (smfblob);
SpJsGetProperty (smfblob);
SpJsSetProperty (smfblob);
SpJsGetPropertyNames (smfblob);
SpJsConstructor (smfblob);
SpJsFinalize (smfblob);

extern const SpJsClassDefinition smfblob_def;
#endif /* (__SMARTFACE_SPJSBLOB__) */
