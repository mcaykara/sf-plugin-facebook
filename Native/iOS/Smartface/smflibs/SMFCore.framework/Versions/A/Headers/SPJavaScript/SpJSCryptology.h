//
//  SpJSCryptology.h
//  SpratIOS
//
//  Created by Antti Panula on 12/5/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSCryptology__
#define __SpratIOS__SpJSCryptology__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

// Cryptology SignMethod Enum Defs
#define SHA1_WITH_RSA 0

SpJsInit (smfcryptology);

SpJsHasProperty (smfcryptology);

SpJsGetProperty (smfcryptology);

SpJsSetProperty (smfcryptology);

SpJsGetPropertyNames (smfcryptology);

extern const SpJsClassDefinition smfcryptology_def;


/**
 * Dummy SpJsClassDefinition for creating enum properties
 */

extern const SpJsClassDefinition smfcryptology_signmethodenum_def;

#endif /* defined(__SpratIOS__SpJSCryptology__) */
