//
//  SpJSFont.h
//  SpratIOS
//
//  Created by adem on 07.03.2013
//

#ifndef SpratIOS_SpJSFont_h
#define SpratIOS_SpJSFont_h

#include "Core/SpDefs.h"
#include "SpJSFunctionsFont.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smffont);
SpJsHasProperty (smffont);
SpJsGetProperty (smffont);
SpJsSetProperty (smffont);
SpJsGetPropertyNames (smffont);
SpJsFinalize (smffont);
SpJsConstructor (smffont);
SpJsValue cb_font_clone(
                          SpJsObject function,
                          SpJsObject thisObject,
                          size_t argumentCount,
                          const SpJsValue arguments[],
                          SpJsValue* exception);


extern const SpJsClassDefinition smffont_def;

#endif
