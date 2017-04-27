//
//  SpJSDOMDocument.h
//  SpratIOS
//
//  Created by Antti Panula on 6.5.2014 -- 5.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSDOMDocument_h
#define SpratIOS_SpJSDOMDocument_h

#include "Core/SpDefs.h"
#include "libxml/tree.h"
#include <vector>
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (domdocument);
SpJsHasProperty (domdocument);
SpJsGetProperty (domdocument);
SpJsSetProperty (domdocument);
SpJsGetPropertyNames (domdocument);
bool domdocument_hasinstance(SpJsObject constructor, SpJsValue possibleInstance, SpJsValue* exception);
SpJsConstructor (domdocument);
SpJsFinalize (domdocument);
SpJsValue cb_domdocument_clone(
                              SpJsObject function,
                              SpJsObject thisObject,
                              size_t argumentCount,
                              const SpJsValue arguments[],
                              SpJsValue* exception);




/*SpJsFunction (cb_domdocument_add_event_listener);*/
SpJsFunction (cb_domdocument_adopt_node);
SpJsFunction (cb_domdocument_create_attribute);
SpJsFunction (cb_domdocument_create_attribute_NS);
SpJsFunction (cb_domdocument_create_comment);
SpJsFunction (cb_domdocument_create_document_fragment);
SpJsFunction (cb_domdocument_create_element);
SpJsFunction (cb_domdocument_create_element_NS);
/*SpJsFunction (cb_domdocument_create_event);*/
SpJsFunction (cb_domdocument_create_node_iterator);
SpJsFunction (cb_domdocument_create_NS_resolver);
SpJsFunction (cb_domdocument_create_range);
SpJsFunction (cb_domdocument_create_text_node);
SpJsFunction (cb_domdocument_create_tree_walker);
/*SpJsFunction (cb_domdocument_dispatch_event);*/
SpJsFunction (cb_domdocument_evaluate);
SpJsFunction (cb_domdocument_get_element_by_id);
SpJsFunction (cb_domdocument_get_elements_by_className);
SpJsFunction (cb_domdocument_get_elements_by_name);
SpJsFunction (cb_domdocument_get_elements_by_tag_name);
SpJsFunction (cb_domdocument_get_elements_by_tag_name_NS);
SpJsFunction (cb_domdocument_import_node);
SpJsFunction (cb_domdocument_query_selector);
SpJsFunction (cb_domdocument_query_selector_all);
SpJsFunction (cb_domdocument_createcdatasection);
/*SpJsFunction (cb_domdocument_remove_event_listener);*/




extern const SpJsClassDefinition domdocument_def;

extern const SpJsClassDefinition domdocumentcopy_def;

xmlNode* getElementById(xmlNode* node, const char* idstr);

void getElementsByTagName(xmlNode* node, const char* tname, std::vector<xmlNode*> *nodes);

void getElementsByTagNameNS(xmlNode* node, const char* tname, const char* NSname, std::vector<xmlNode*> *nodes);

void getElementsByClassName(xmlNode* node, const char* tname, std::vector<xmlNode*> *nodes);

void getElementsByName(xmlNode* node, const char* tname, std::vector<xmlNode*> *nodes);

#endif
