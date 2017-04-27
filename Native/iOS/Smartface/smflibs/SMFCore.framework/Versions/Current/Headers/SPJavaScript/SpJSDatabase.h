//
//  SpJSDatabase.h
//  SpratIOS
//
//  Created by Adem Cayir on 12/7/15.
//

#ifndef SpratIOS_SpJSDatabase_h
#define SpratIOS_SpJSDatabase_h

#include "SpJsEngine/Core/SpJsEngine.h"
#include "DBInterface/sqlite3.h"

SpJsInit (smfdatabase);
SpJsHasProperty (smfdatabase);
SpJsGetProperty (smfdatabase);
SpJsSetProperty (smfdatabase);
SpJsGetPropertyNames (smfdatabase);
SpJsConstructor (smfdatabase);
SpJsFinalize (smfdatabase);


extern const SpJsClassDefinition smfdatabase_def;


#endif
