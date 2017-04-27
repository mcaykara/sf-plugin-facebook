//
//  SpTitleViewType.h
//  Smartface
//
//  Created by ugur kilic on 14/03/2014
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#include "Core/SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsHasProperty (smftitleviewtype);
SpJsGetProperty (smftitleviewtype);
KTitleViewType smftitleviewtype_jsvalue_convert(SpJsValue value,bool &success);
SpJsGetPropertyNames (smftitleviewtype);

extern const SpJsClassDefinition smftitleviewtype_def;
