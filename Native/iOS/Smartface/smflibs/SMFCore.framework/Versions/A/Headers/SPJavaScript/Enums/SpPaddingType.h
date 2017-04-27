//
//  SpJSPaddingType.h
//
//  Created by adem on 26.03.2013 -- 5.
//

#ifndef __SpratIOS__SpJSPaddingType__
#define __SpratIOS__SpJSPaddingType__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

/**

typedef enum {
    CPTDefault,
    CPTNo,
    CPTPKCS
} CryptoPaddingType;

Cryptology.PaddingType.default;
Cryptology.PaddingType.no;
Cryptology.PaddingType.PKCS;



 */


SpJsInit (smfpaddingtype);

SpJsHasProperty (smfpaddingtype);

SpJsGetProperty (smfpaddingtype);

SpJsSetProperty (smfpaddingtype);

SpJsGetPropertyNames (smfpaddingtype);

TCryptoPaddingType smfpaddingtype_jsvalue_convert(SpJsValue value,bool &success);

extern const SpJsClassDefinition smfpaddingtype_def;

#endif /* defined(__SpratIOS__SpJSMapType__) */
