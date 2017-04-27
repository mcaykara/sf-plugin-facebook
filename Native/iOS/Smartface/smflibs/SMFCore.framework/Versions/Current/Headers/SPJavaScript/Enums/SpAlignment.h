//
//  SpJSImageAlignment.h
//  SpratIOS
//
//  Created by Antti Panula on 11/19/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSImageAlignment__
#define __SpratIOS__SpJSImageAlignment__

#include "Core/SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"

/**
 * /**
 * SMF.UI.Alignment.topLeft
SMF.UI.Alignment.top
SMF.UI.Alignment.topRight
SMF.UI.Alignment.left
SMF.UI.Alignment.center
SMF.UI.Alignment.right
SMF.UI.Alignment.bottomLeft
SMF.UI.Alignment.bottom
SMF.UI.Alignment.bottomRight

typedef enum {
    TIATTopLeft,
    TIATTop,
    TIATTopRight,
    TIATLeft,
    TIATCenter,
    TIATRight,
    TIATBottomLeft,
    TIATBottom,
    TIATBottomRight,
} TImageAlignmentType;

 */


SpJsInit (smfalignment);

SpJsHasProperty (smfalignment);

SpJsGetProperty (smfalignment);

SpJsSetProperty (smfalignment);

TImageAlignmentType smfalignment_jsvalue_convert(SpJsValue value,bool &success);

SpJsGetPropertyNames (smfalignment);

extern const SpJsClassDefinition smfalignment_def;

#endif /* defined(__SpratIOS__SpJSImageAlignment__) */
