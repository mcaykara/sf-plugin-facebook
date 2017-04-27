//
//  SpJSNodeListB.h
//  SpratIOS
//
//  Created by Antti Panula on 12.5.2014 -- 5.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSNodeListB_h
#define SpratIOS_SpJSNodeListB_h

#include "Core/SpDefs.h"
#include "libxml/tree.h"
#include <vector>
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (nodelistb);
SpJsHasProperty (nodelistb);
SpJsGetProperty (nodelistb);
SpJsSetProperty (nodelistb);
SpJsGetPropertyNames (nodelistb);
SpJsFinalize (nodelistb);

SpJsFunction (cb_nodelistb_item);

SpJsValue cb_nodelistb_get_named_item(
                                      SpJsObject function,
                                      SpJsObject thisObject,
                                      size_t argumentCount,
                                      const SpJsValue arguments[],
                                      SpJsValue* exception);

SpJsValue cb_nodelistb_get_named_item_ns(
                                         SpJsObject function,
                                         SpJsObject thisObject,
                                         size_t argumentCount,
                                         const SpJsValue arguments[],
                                         SpJsValue* exception);

SpJsValue cb_nodelistb_remove_named_item(
                                         SpJsObject function,
                                         SpJsObject thisObject,
                                         size_t argumentCount,
                                         const SpJsValue arguments[],
                                         SpJsValue* exception);

SpJsValue cb_nodelistb_remove_named_item_ns(
                                            SpJsObject function,
                                            SpJsObject thisObject,
                                            size_t argumentCount,
                                            const SpJsValue arguments[],
                                            SpJsValue* exception);

SpJsValue cb_nodelistb_set_named_item(
                                      SpJsObject function,
                                      SpJsObject thisObject,
                                      size_t argumentCount,
                                      const SpJsValue arguments[],
                                      SpJsValue* exception);

SpJsValue cb_nodelistb_set_named_item_ns(
                                         SpJsObject function,
                                         SpJsObject thisObject,
                                         size_t argumentCount,
                                         const SpJsValue arguments[],
                                         SpJsValue* exception);


extern const SpJsClassDefinition nodelistb_def;

SpJsValue findAndCreateNodeJSObjectB(std::vector<xmlNode*>* nodes, char* property);

#endif
