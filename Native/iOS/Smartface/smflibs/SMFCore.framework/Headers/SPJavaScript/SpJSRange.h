//
//  SpJSRange.h
//  SpratIOS
//
//  Created by Antti Panula on 14.5.2014 -- 5.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSRange_h
#define SpratIOS_SpJSRange_h

#include "Core/SpDefs.h"
#include <ostream>
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (range);
SpJsHasProperty (range);
SpJsGetProperty (range);
SpJsSetProperty (range);
SpJsGetPropertyNames (range);
SpJsFinalize (range);


extern const SpJsClassDefinition range_def;

typedef struct {
    xmlDoc* doc;
    xmlNode* start;
    int startOffset;
    xmlNode* end;
    int endOffset;
} JSRangeData;


SpJsFunction (cb_range_clonecontents);
SpJsFunction (cb_range_clonerange);
SpJsFunction (cb_range_collapse);
SpJsFunction (cb_range_compareboundarypoints);
SpJsFunction (cb_range_comparenode);
SpJsFunction (cb_range_comparepoint);
SpJsFunction (cb_range_createcontextualfragment);
SpJsFunction (cb_range_deletecontents);
SpJsFunction (cb_range_detach);
SpJsFunction (cb_range_extractcontents);
SpJsFunction (cb_range_insertnode);
SpJsFunction (cb_range_intersectsnode);
SpJsFunction (cb_range_ispointinrange);
SpJsFunction (cb_range_selectnode);
SpJsFunction (cb_range_selectnodecontents);
SpJsFunction (cb_range_setend);
SpJsFunction (cb_range_setendafter);
SpJsFunction (cb_range_setendbefore);
SpJsFunction (cb_range_setstart);
SpJsFunction (cb_range_setstartafter);
SpJsFunction (cb_range_setstartbefore);
SpJsFunction (cb_range_surroundcontents);
SpJsFunction (cb_range_tostring);

void rangeCompareBoundaryPointsFind(xmlNode* node, xmlNode* target1, xmlNode* target2, bool* foundTarget1, bool* foundTarget2);
void rangeCompareNodeFind(xmlNode* node, xmlNode* target, xmlNode* start, xmlNode* end, bool* foundTarget, bool* foundStart, bool* foundEnd);
bool rangeExtractContents(xmlNode* parent, xmlNode* node, xmlNode* end);
bool rangeDeleteContents(xmlNode* node, xmlNode* end);
bool rangeCloneContents(xmlNode* parent, xmlNode* node, xmlNode* end);
bool findNodeInRange(xmlNode* start, xmlNode* end, xmlNode* target);
bool treeToString(xmlNode* start, xmlNode* end, int startOffset, int endOffset, std::ostringstream& stringStream);

#endif
