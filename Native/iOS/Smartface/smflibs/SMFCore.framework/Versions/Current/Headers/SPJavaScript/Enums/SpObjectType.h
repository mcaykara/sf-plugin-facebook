//
//  SpJSObjectType.h
//
//  Created by adem on 26.04.2013 -- 5.
//

#ifndef __SpratIOS__SpJSObjectType__
#define __SpratIOS__SpJSObjectType__

#include "SpJsEngine/Core/SpJsEngine.h"

/**






 */

class SpBrParcelable;

SpJsInit (smfobjecttype);

SpJsHasProperty (smfobjecttype);

SpJsGetProperty (smfobjecttype);

SpJsSetProperty (smfobjecttype);

int smfobjecttype_jsvalue_convert(SpJsValue value,bool &success);

const char* smfobjecttype_value(int type,SpBrParcelable* object=NULL);

SpJsGetPropertyNames (smfobjecttype);


extern const SpJsClassDefinition smfobjecttype_def;

#endif /* defined(__SpratIOS__SpJSMapType__) */
