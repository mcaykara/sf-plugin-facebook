//
//  SpJSFileStream.h
//
//  Created by adem on 26/4/14.
//

#ifndef Sprat_SpJSFileStream_h
#define Sprat_SpJSFileStream_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smffilestream);

SpJsHasProperty (smffilestream);

SpJsGetProperty (smffilestream);

SpJsSetProperty (smffilestream);

SpJsGetPropertyNames (smffilestream);

SpJsConstructor (smffilestream);

SpJsFinalize (smffilestream);


extern const SpJsClassDefinition smffilestream_def;


#endif
