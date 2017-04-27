//
//  SpRepeatBoxRowAnimationType.h
//  Smartface
//
//  Created by ugur kilic on 23/11/2014
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#include "Core/SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsHasProperty (smfrepeatboxrowanimationtype);
SpJsGetProperty (smfrepeatboxrowanimationtype);
SpJsGetPropertyNames (smfrepeatboxrowanimationtype);

KRepeatBoxRowAnimation smfrepeatboxrowanimationtype_jsvalue_convert(SpJsValue value,bool &success);

extern const SpJsClassDefinition smfrepeatboxrowanimationtype_def;
