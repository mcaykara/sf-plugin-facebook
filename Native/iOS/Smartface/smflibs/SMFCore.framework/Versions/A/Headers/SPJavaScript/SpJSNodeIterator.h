//
//  SpJSNodeIterator.h
//  SpratIOS
//
//  Created by Antti Panula on 12.5.2014 -- 5.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSNodeIterator_h
#define SpratIOS_SpJSNodeIterator_h

#include "Core/SpDefs.h"
#include "libxml/tree.h"
#include <vector>
#include <stack>
#include <list>
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (nodeiterator);
SpJsHasProperty (nodeiterator);
SpJsGetProperty (nodeiterator);
SpJsSetProperty (nodeiterator);
SpJsGetPropertyNames (nodeiterator);
SpJsFinalize (nodeiterator);

extern const SpJsClassDefinition nodeiterator_def;

typedef struct {
    int nodeTypeFilter;
    bool entityRefExpansion;
    int curIndex;
    xmlNode* root;
    xmlNode* curnode;
    SpJsObject filterFunction;
    std::list<xmlNode*>* stack;
    std::list<xmlNode*>* usedstack;
} NodeIteratorData;

SpJsFunction (cb_nodeiterator_detach);
SpJsFunction (cb_nodeiterator_nextnode);
SpJsFunction (cb_nodeiterator_previousnode);
void buildNodeIteratorList(NodeIteratorData* data);
void doBuildNodeIteratorList(xmlNode* node, std::vector<xmlNode*> *list);
#endif
