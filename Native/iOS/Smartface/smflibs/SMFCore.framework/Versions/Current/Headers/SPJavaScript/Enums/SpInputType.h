//
//  SpJSInputType.h
//
//  Created by adem on 26.03.2013 -- 5.
//

#ifndef __SpratIOS__SpJSInputType__
#define __SpratIOS__SpJSInputType__

#include "Core/SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"


SpJsInit (smfinputtype);

SpJsHasProperty (smfinputtype);

SpJsGetProperty (smfinputtype);

SpJsSetProperty (smfinputtype);

DataInputType smfinputtype_jsvalue_convert(SpJsValue value,bool &success);

SpJsGetPropertyNames (smfinputtype);


extern const SpJsClassDefinition smfinputtype_def;

#endif /* defined(__SpratIOS__SpJSMapType__) */
