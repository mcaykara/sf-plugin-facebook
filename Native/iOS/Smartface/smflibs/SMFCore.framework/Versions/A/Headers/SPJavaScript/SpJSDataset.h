//
//  SpJSApplication.h
//  SpratIOS
//
//  Created by Antti Panula on 11/6/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSDataset_h
#define SpratIOS_SpJSDataset_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfdataset);
SpJsHasProperty (smfdataset);
SpJsGetProperty (smfdataset);
SpJsSetProperty (smfdataset);
SpJsGetPropertyNames (smfdataset);
SpJsConstructor (smfdataset);
SpJsFinalize (smfdataset);

extern const SpJsClassDefinition smfdataset_def;

#endif
