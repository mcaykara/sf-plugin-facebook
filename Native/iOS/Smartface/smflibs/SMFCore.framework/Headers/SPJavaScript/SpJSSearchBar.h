//
//  SpJSSearchBar.h
//  SpratIOS
//
//  Created by Selcuk Yayla on 25/6/14.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSSearchBar__
#define __SpratIOS__SpJSSearchBar__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

class SpBrNuiSearchBar;

SpJsInit (smfsearchview);
SpJsHasProperty (smfsearchview);
SpJsGetProperty (smfsearchview);
SpJsSetProperty (smfsearchview);
SpJsGetPropertyNames (smfsearchview);
SpJsConstructor (smfsearchview);
SpJsFinalize (smfsearchview);


extern const SpJsClassDefinition smfsearchview_def;

SpJsFunction (cb_searchbar_cancel);

SpJsFunction (cb_searchbar_closekeyboard);


#endif /* defined(__SpratIOS__SpJSSearchBar__) */
