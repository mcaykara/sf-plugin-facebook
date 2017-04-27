//
//  SpJSFile.h
//
//  Created by adem on 26/4/14.
//

#ifndef Sprat_SpJSFile_h
#define Sprat_SpJSFile_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smffile);

SpJsHasProperty (smffile);

SpJsGetProperty (smffile);

SpJsSetProperty (smffile);

SpJsGetPropertyNames (smffile);

SpJsConstructor (smffile);

SpJsFinalize (smffile);


extern const SpJsClassDefinition smffile_def;


#endif
