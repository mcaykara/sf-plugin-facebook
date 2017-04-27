//
//  SpJSBlobFunctions.h
//  Smartface
//
//  Created by Ugur Kilic on 8/12/14.
//  Copyright (c) 2014 Smartface. All rights reserved.
//

#ifndef __SMARTFACE_SPJSBLOBFUNCTIONS__
#define __SMARTFACE_SPJSBLOBFUNCTIONS__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsFunction (js_blob_slice);

SpJsFunction (js_blob_tobase64string);

SpJsFunction (js_blob_frombase64string);

SpJsFunction (js_blob_fromstring);

SpJsFunction (js_blob_appendbase64string);

SpJsFunction (js_blob_appendstring);

SpJsFunction (js_blob_tostring);

#endif /* (__SMARTFACE_SPJSBLOBFUNCTIONS__) */
