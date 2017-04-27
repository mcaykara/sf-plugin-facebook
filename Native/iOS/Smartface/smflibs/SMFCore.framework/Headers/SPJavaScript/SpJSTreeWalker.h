//
//  SpJSTreeWalker.h
//  SpratIOS
//
//  Created by Antti Panula on 12.5.2014 -- 5.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSTreeWalker_h
#define SpratIOS_SpJSTreeWalker_h

#include "Core/SpDefs.h"
#include "libxml/tree.h"
#include <list>
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (treewalker);
SpJsHasProperty (treewalker);
SpJsGetProperty (treewalker);
SpJsSetProperty (treewalker);
SpJsGetPropertyNames (treewalker);
SpJsFinalize (treewalker);

extern const SpJsClassDefinition treewalker_def;

typedef struct {
    int nodeTypeFilter;
    bool entityRefExpansion;
    xmlNode* root;
    xmlNode* curnode;
    SpJsObject filterFunction;
    std::list<xmlNode*>* stack;
    std::list<xmlNode*>* usedstack;
} TreeWalkerData;

SpJsFunction (cb_treewalker_firstchild);
SpJsFunction (cb_treewalker_lastchild);
SpJsFunction (cb_treewalker_nextnode);
SpJsFunction (cb_treewalker_nextsibling);
SpJsFunction (cb_treewalker_parentnode);
SpJsFunction (cb_treewalker_previousnode);
SpJsFunction (cb_treewalker_previoussibling);

int checkNode(SpJsObject thisObject, xmlNode* node, int nodeTypeFilter, SpJsObject filterFunction);


#endif
