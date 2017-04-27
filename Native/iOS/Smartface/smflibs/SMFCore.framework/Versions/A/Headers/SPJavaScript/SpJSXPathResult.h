//
//  SpJSXPathResult.h
//  SpratIOS
//
//  Created by Antti Panula on 12.5.2014 -- 5.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSXPathResult_h
#define SpratIOS_SpJSXPathResult_h

#include "Core/SpDefs.h"
#include "libxml/tree.h"
#include "libxml/xpath.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (xpathresult);
SpJsHasProperty (xpathresult);
SpJsGetProperty (xpathresult);
SpJsSetProperty (xpathresult);
SpJsGetPropertyNames (xpathresult);
SpJsFinalize (xpathresult);

extern const SpJsClassDefinition xpathresult_def;

typedef struct {
    int resultType;
    xmlNode* contextNode;
    SpJsObject namespaceResolver;
    char* xpathExpression;
    xmlXPathContext* context;
    xmlXPathObject* xpathObj;
    int index;
} XPathResultData;

SpJsFunction (cb_xpathresult_iteratenext);
SpJsFunction (cb_xpathresult_snapshotItem);

#endif
