//
//  SpMenuItemType.h
//  SpratIOS
//
//  Created by Mehmet Akyol on 17/03/14.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpMenuItemType_h
#define SpratIOS_SpMenuItemType_h


#include "Core/SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfmenuitemtype);

SpJsHasProperty (smfmenuitemtype);

SpJsGetProperty (smfmenuitemtype);

SpJsSetProperty (smfmenuitemtype);

TMenuItemType smfmenuitemtype_jsvalue_convert(SpJsValue value,bool &success);

SpJsGetPropertyNames (smfmenuitemtype);

extern const SpJsClassDefinition smfmenuitemtype_def;



#endif
