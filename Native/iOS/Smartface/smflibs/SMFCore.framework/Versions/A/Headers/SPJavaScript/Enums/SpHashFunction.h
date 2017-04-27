//
//  SpJSHashFunction.h
//
//  Created by adem on 26.03.2013 -- 5.
//

#ifndef __SpratIOS__SpJSHashFunction__
#define __SpratIOS__SpJSHashFunction__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

/**


typedef enum {
    STSha160,
    STSha224,
    STSha256,
    STSha384,
    STSha512
} TShaType;

Cryptology.HashFunction.sha224
Cryptology.HashFunction.sha256
Cryptology.HashFunction.sha384
Cryptology.HashFunction.sha512


 */


SpJsInit (smfhashfunction);

SpJsHasProperty (smfhashfunction);

SpJsGetProperty (smfhashfunction);

SpJsSetProperty (smfhashfunction);

TShaType smfhashfunction_jsvalue_convert(SpJsValue value,bool &success);

SpJsGetPropertyNames (smfhashfunction);


extern const SpJsClassDefinition smfhashfunction_def;

#endif /* defined(__SpratIOS__SpJSMapType__) */
