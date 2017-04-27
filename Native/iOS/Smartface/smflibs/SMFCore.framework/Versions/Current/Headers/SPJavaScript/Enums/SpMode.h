//
//  SpMode.h
//
//  Created by adem on 26.03.2013 -- 5.
//

#ifndef __SpratIOS__SpJSMode__
#define __SpratIOS__SpJSMode__

#include "Core/SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"

/**

typedef enum {
    CMEncrypt,
    CMDecrypt
} CryptoMode;


Cryptology.Mode.encrypt
Cryptology.Mode.decrypt


 */


SpJsInit (smfmode);

SpJsHasProperty (smfmode);

SpJsGetProperty (smfmode);

SpJsSetProperty (smfmode);

CryptoMode smfmode_jsvalue_convert(SpJsValue value,bool &success);

SpJsGetPropertyNames (smfmode);


extern const SpJsClassDefinition smfmode_def;

#endif /* defined(__SpratIOS__SpJSMapType__) */
