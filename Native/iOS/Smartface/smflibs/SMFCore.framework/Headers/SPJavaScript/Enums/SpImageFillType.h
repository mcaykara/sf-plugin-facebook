//
//  SpJSImageFillType.h
//  SpratIOS
//
//  Created by Antti Panula on 11/16/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSImageFillType__
#define __SpratIOS__SpJSImageFillType__

#include "Core/SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"


SpJsInit (smfimagefilltype);

SpJsHasProperty (smfimagefilltype);

SpJsGetProperty (smfimagefilltype);

SpJsSetProperty (smfimagefilltype);

bool js_set_imagefilltype_value_to_view(SpJsValue value, SpBrNuiBase* view, bool initial = false);

SpJsGetPropertyNames (smfimagefilltype);

extern const SpJsClassDefinition smfimagefilltype_def;

#endif /* defined(__SpratIOS__SpJSImageFillType__) */
