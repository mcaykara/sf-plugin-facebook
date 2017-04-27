/*
 * SpJSMapPin.h
 *
 *  Created on: 22 Oca 2014
 *      Author: enes.gemci
 */

#ifndef SPJSMAPPIN_H_
#define SPJSMAPPIN_H_

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfmappin);

SpJsHasProperty (smfmappin);

SpJsGetProperty (smfmappin);

SpJsSetProperty (smfmappin);

SpJsConstructor (smfmappin);

SpJsFinalize (smfmappin);

SpJsGetPropertyNames (smfmappin);

extern const SpJsClassDefinition smfmappin_def;

#endif /* SPJSMAPPIN_H_ */
