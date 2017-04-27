//
//  SpJSIO.h
//
//  Created by adem on 26/4/14.
//

#ifndef SpratIOS_SpJSIO_h
#define SpratIOS_SpJSIO_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfio);

SpJsHasProperty (smfio);

SpJsGetProperty (smfio);

SpJsSetProperty (smfio);

SpJsGetPropertyNames (smfio);

extern const SpJsClassDefinition smfio_def;


#endif
