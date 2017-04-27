//
//  SpJSEditBoxInputFiltering.h
//
//  Created by adem on 11/19/12.
//
//EditBoxReturnKey
#ifndef __SpratIOS__SpJSEditBoxInputFiltering__
#define __SpratIOS__SpJSEditBoxInputFiltering__

#include "SpJsEngine/Core/SpJsEngine.h"
//EditBoxInputFiltering editboxinputfiltering
SpJsInit (smfeditboxinputfiltering);

SpJsHasProperty (smfeditboxinputfiltering);

SpJsGetProperty (smfeditboxinputfiltering);

SpJsSetProperty (smfeditboxinputfiltering);

int smfeditboxreturnkey_string_to_int(SpJsValue value);

int smfeditboxinputfiltering_string_to_int(SpJsValue value);

SpJsGetPropertyNames (smfeditboxinputfiltering);

extern const SpJsClassDefinition smfeditboxinputfiltering_def;

#endif /* defined(__SpratIOS__SpJSImageFillType__) */
