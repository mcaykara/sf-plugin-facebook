//
//  SpJSFormData.h
//  Smartface
//
//  Created by Ugur Kilic on 16/12/14.
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#ifndef __SMARTFACE_SPJSFORMDATA__
#define __SMARTFACE_SPJSFORMDATA__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsHasProperty (smfformdata);
SpJsGetProperty (smfformdata);
SpJsSetProperty (smfformdata);
SpJsGetPropertyNames (smfformdata);
SpJsConstructor (smfformdata);
SpJsFinalize (smfformdata);

extern const SpJsClassDefinition smfformdata_def;

SpJsFunction (js_formdata_append);

#endif /* (__SMARTFACE_SPJSFORMDATA__) */
