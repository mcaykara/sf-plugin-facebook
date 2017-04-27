//
//  SpBarButtonSystemItem.h
//  Smartface
//
//  Created by ugur kilic on 04/03/2014
//  Copyright (c) 2013 Smartface. All rights reserved.
//

#include "Core/SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsHasProperty (smfbarbuttonsystemitem);
SpJsGetProperty (smfbarbuttonsystemitem);
KBarButtonSystemItem smfbarbuttonsystemitem_jsvalue_convert(SpJsValue value,bool &success);
SpJsGetPropertyNames (smfbarbuttonsystemitem);

extern const SpJsClassDefinition smfbarbuttonsystemitem_def;
