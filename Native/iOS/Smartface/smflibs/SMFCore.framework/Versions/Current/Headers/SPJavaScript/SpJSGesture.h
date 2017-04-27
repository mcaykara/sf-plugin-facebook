//
//  SpJSGesture.h
//  SpratIOS
//
//  Created by mehmet akyol on 10/23/13.
//  Copyright (c) 2013 Smartface. All rights reserved.
//

#ifndef __SpratIOS__SpJSGesture__
#define __SpratIOS__SpJSGesture__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfgesture);

SpJsHasProperty (smfgesture);

SpJsGetProperty (smfgesture);

SpJsSetProperty (smfgesture);

SpJsConstructor (smfgesture);

SpJsFinalize (smfgesture);

SpJsGetPropertyNames (smfgesture);

class SpGestures;

typedef struct smfgestureitemdata
{
	SpGestures* gestureItem;
} Smfgestureitemdata;

extern const SpJsClassDefinition smfgesture_def;

#endif /* defined(__SpratIOS__SpJSGesture__) */
