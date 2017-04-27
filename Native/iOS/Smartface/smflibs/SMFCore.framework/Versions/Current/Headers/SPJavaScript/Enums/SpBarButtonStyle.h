//
//  SpBarButtonStyle.h
//  Smartface
//
//  Created by ugur kilic on 05/03/2014
//  Copyright (c) 2013 Smartface. All rights reserved.
//

#include "Core/SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsHasProperty (smfbarbuttonstyle);
SpJsGetProperty (smfbarbuttonstyle);
KBarButtonStyle smfbarbuttonstyle_jsvalue_convert(SpJsValue value,bool &success);
SpJsGetPropertyNames (smfbarbuttonstyle);

extern const SpJsClassDefinition smfbarbuttonstyle_def;
