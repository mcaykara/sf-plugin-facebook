//
//  SpJSEditBox.h
//  SpratIOS
//
//  Created by Antti Panula on 31.10.2012 -- 5.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSEditBox_h
#define SpratIOS_SpJSEditBox_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

class SpBrNuiEditBoxView;

SpJsInit (smfeditbox);
SpJsHasProperty (smfeditbox);
SpJsGetProperty (smfeditbox);
SpJsSetProperty (smfeditbox);
SpJsGetPropertyNames (smfeditbox);
SpJsConstructor (smfeditbox);
SpJsFinalize (smfeditbox);

SpJsValue js_get_activestroke_color(SpBrNuiEditBoxView* view);
bool js_set_activestroke_color(SpBrNuiEditBoxView* view, SpJsValue value);
SpJsFunction (cb_editbox_closeKeyboard);
extern const SpJsClassDefinition smfeditbox_def;

#endif
