//
//  DatePickerDisplayMode.h
//
//  Created by adem on 3/8/14.
//
//DatePickerDisplayMode
#ifndef __SpratIOS__SpDatePickerDisplayMode__
#define __SpratIOS__SpDatePickerDisplayMode__

#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfdatepickerdisplaymode);

SpJsHasProperty (smfdatepickerdisplaymode);

SpJsGetProperty (smfdatepickerdisplaymode);

SpJsSetProperty (smfdatepickerdisplaymode);

SpJsGetPropertyNames (smfdatepickerdisplaymode);

int smfdatepickerdisplaymode_value_to_mode(SpJsValue value,bool &success);

extern const SpJsClassDefinition smfdatepickerdisplaymode_def;

#endif /* defined(__SpratIOS__SpJSImageFillType__) */
