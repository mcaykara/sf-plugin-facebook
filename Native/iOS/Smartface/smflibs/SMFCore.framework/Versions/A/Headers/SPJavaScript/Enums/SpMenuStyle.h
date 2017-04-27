//
//  SpJSMenuStyle.h
//
//  Created by adem on 26.03.2013 -- 5.
//

#ifndef __SpratIOS__SpJSMenuStyle__
#define __SpratIOS__SpJSMenuStyle__

#include "Core/SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"


SpJsInit (smfmenustyle);

SpJsHasProperty (smfmenustyle);

SpJsGetProperty (smfmenustyle);

SpJsSetProperty (smfmenustyle);

SpJsGetPropertyNames (smfmenustyle);

TMenuType smfmenustyle_jsvalue_convert(SpJsValue value,bool &success);


extern const SpJsClassDefinition smfmenustyle_def;

#endif /* defined(__SpratIOS__SpJSMapType__) */
