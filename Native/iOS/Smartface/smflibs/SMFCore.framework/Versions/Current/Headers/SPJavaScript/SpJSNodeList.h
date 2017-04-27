//
//  SpJSNodeList.h
//  SpratIOS
//
//  Created by Antti Panula on 6.5.2014 -- 5.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSNodeList_h
#define SpratIOS_SpJSNodeList_h

#include "Core/SpDefs.h"
#include "libxml/tree.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (nodelist);
SpJsHasProperty (nodelist);
SpJsGetProperty (nodelist);
SpJsSetProperty (nodelist);
SpJsGetPropertyNames (nodelist);
SpJsFinalize (nodelist);

SpJsFunction (cb_nodelist_item);

SpJsFunction (cb_nodelist_get_named_item);

SpJsFunction (cb_nodelist_get_named_item_ns);

SpJsFunction (cb_nodelist_remove_named_item);

SpJsFunction (cb_nodelist_remove_named_item_ns);

SpJsFunction (cb_nodelist_set_named_item);

SpJsFunction (cb_nodelist_set_named_item_ns);


extern const SpJsClassDefinition nodelist_def;

SpJsValue findAndCreateNodeJSObject(xmlNode* node, char* property);
SpJsValue findAndCreateNodeJSObject(xmlNode* node);

#endif
