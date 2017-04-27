/*
 * SpScrollDirection.h
 *
 *  Created on: 14 Kas 2013
 *      Author: enes.gemci
 */

#include "Core/SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfimageformat);

SpJsHasProperty (smfimageformat);

SpJsGetProperty (smfimageformat);

SpJsSetProperty (smfimageformat);

TImageFormat smfimageformat_jsvalue_convert(SpJsValue value,bool &success);

SpJsGetPropertyNames (smfimageformat);

extern const SpJsClassDefinition smfimageformat_def;
