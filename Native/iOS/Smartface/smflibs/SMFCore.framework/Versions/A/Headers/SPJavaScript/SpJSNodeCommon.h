//
//  SpJSNodeCommon.h
//  SpratIOS
//
//  Created by Antti Panula on 07.05.2014 -- 5.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSNodeCommon_h
#define SpratIOS_SpJSNodeCommon_h
#include "Core/SpDefs.h"
#include "Core/SpBrString.h"
#include "libxml/tree.h"

#include <string>
#include <vector>
#include "SpJsEngine/Core/SpJsEngine.h"

void js_common_node_setdefaultproperties(SpJsObject object);
SpJsValue js_get_common_nodeproperties(char* property, xmlNode* node);
bool js_set_common_nodeproperties(char* property, xmlNode* node, SpJsValue value);
SpJsValue createNodeJSObject(xmlNode* node);

std::vector<std::string> xmlGetChildren (xmlNode* node);
bool xmlPropertyInNode (xmlNode*, const char*);

SpJsFunction (cb_nodecommon_append_child);

SpJsFunction (cb_nodecommon_clone_node);

SpJsFunction (cb_nodecommon_compare_document_position);

SpJsFunction (cb_nodecommon_has_attributes);

SpJsFunction (cb_nodecommon_has_child_nodes);



SpJsFunction (cb_nodecommon_insert_before);
SpJsFunction (cb_nodecommon_is_default_namespace);
SpJsFunction (cb_nodecommon_is_equal_node);
SpJsFunction (cb_nodecommon_is_same_node);
SpJsFunction (cb_nodecommon_is_supported);
SpJsFunction (cb_nodecommon_lookup_namespace_URI);
SpJsFunction (cb_nodecommon_lookup_prefix);
SpJsFunction (cb_nodecommon_normalize);
SpJsFunction (cb_nodecommon_remove_child);
SpJsFunction (cb_nodecommon_replace_child);

void normalizeNode(xmlNode *node);


SpJsFunction (cb_nodecommon_create_attribute);
SpJsFunction (cb_nodecommon_get_attribute);
SpJsFunction (cb_nodecommon_get_attributeNode);
SpJsFunction (cb_nodecommon_has_attribute);
SpJsFunction (cb_nodecommon_remove_attribute);
SpJsFunction (cb_nodecommon_remove_attribute_node);
SpJsFunction (cb_nodecommon_set_attribute);
SpJsFunction (cb_nodecommon_set_attribute_node);
SpJsFunction (cb_toJSONCyclic);


#endif
