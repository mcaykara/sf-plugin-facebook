//
//  SpStreamType.h
//
//  Created by adem on 26.03.2013 -- 5.
//

#ifndef __SpratIOS__SpJSStreamType__
#define __SpratIOS__SpJSStreamType__

#include "Core/SpBrNuiBase.h"
#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

/**


typedef enum {
    IOSTRead,
    IOSTWrite
} IOStreamType;

SMF.IO.SteamType.read
SMF.IO.SteamType.write


 */


SpJsInit (smfstreamtype);

SpJsHasProperty (smfstreamtype);

SpJsGetProperty (smfstreamtype);

SpJsSetProperty (smfstreamtype);

IOStreamType smfstreamtype_jsvalue_convert(SpJsValue value,bool &success);

SpJsGetPropertyNames (smfstreamtype);


extern const SpJsClassDefinition smfstreamtype_def;

#endif /* defined(__SpratIOS__SpJSMapType__) */
