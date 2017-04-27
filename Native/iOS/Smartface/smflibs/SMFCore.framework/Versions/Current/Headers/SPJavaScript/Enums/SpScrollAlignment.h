/*
 * SpScrollAlignment.h
 *
 *  Created on: 14 Kas 2013
 *      Author: enes.gemci
 */

#include "Core/SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfscrollalignment);

SpJsHasProperty (smfscrollalignment);

SpJsGetProperty (smfscrollalignment);

SpJsSetProperty (smfscrollalignment);

SpJsGetPropertyNames (smfscrollalignment);

TScrollAlignment smfscrollalignment_jsvalue_convert(SpJsValue value,bool &success);

extern const SpJsClassDefinition smfscrollalignment_def;
