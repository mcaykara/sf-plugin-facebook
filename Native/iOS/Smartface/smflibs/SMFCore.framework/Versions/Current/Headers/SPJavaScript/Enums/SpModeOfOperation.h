//
//  SpJSModeOperation.h
//
//  Created by adem on 26.03.2013 -- 5.
//

#ifndef __SpratIOS__SpJSModeOfOperation__
#define __SpratIOS__SpJSModeOfOperation__

#include "Core/SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"

/**

typedef enum {
    BCMCBC,
    BCMECB,
    BCMCFB,
    BCMOFB,
    BCMCTR
} TBlockCipherMode;

Cryptology.ModeOfOperation.cbc
Cryptology.ModeOfOperation.ecb
Cryptology.ModeOfOperation.cfb
Cryptology.ModeOfOperation.ofb
Cryptology.ModeOfOperation.ctr


 */


SpJsInit (smfmodeofoperation);

SpJsHasProperty (smfmodeofoperation);

SpJsGetProperty (smfmodeofoperation);

SpJsSetProperty (smfmodeofoperation);

SpJsGetPropertyNames (smfmodeofoperation);

TBlockCipherMode smfmodeofoperation_jsvalue_convert(SpJsValue value,bool &success);


extern const SpJsClassDefinition smfmodeofoperation_def;

#endif /* defined(__SpratIOS__SpJSMapType__) */
