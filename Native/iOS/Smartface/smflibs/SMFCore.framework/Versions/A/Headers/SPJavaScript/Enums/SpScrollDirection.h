/*
 * SpScrollDirection.h
 *
 *  Created on: 14 Kas 2013
 *      Author: enes.gemci
 */

#include "Core/SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfscrolldirection);

SpJsHasProperty (smfscrolldirection);

SpJsGetProperty (smfscrolldirection);

SpJsSetProperty (smfscrolldirection);

TScrollDirection smfscrolldirection_jsvalue_convert(SpJsValue value,bool &success);

SpJsGetPropertyNames (smfscrolldirection);

extern const SpJsClassDefinition smfscrolldirection_def;
