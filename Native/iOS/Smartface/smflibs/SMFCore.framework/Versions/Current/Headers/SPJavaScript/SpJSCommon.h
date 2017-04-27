//
//  SpJSCommon.h
//  SpratIOS
//
//  Created by Antti Panula on 30.10.2012 -- 5.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSCommon_h
#define SpratIOS_SpJSCommon_h
#include "Core/SpDefs.h"
#include "Core/SpBrString.h"

#include <assert.h>
#include "SpJsEngine/Core/SpJsEngine.h"
#include "Core/fast_array.h"

class SpBrNuiBase;
class SpBrBase;
class SpBrNuiContainer;
class SpBrParcelable;
class SpBrNuiLine;
class SpBrNuiEditBoxView;
class SpBrNuiSliderDrawer;
class SpUtRect;

extern const SpJsClassDefinition smfdatasource_def;

extern const SpJsClassDefinition smfsmfclass_def;

extern const SpJsClassDefinition smfuiclass_def;
extern const SpJsClassDefinition smfandroidclass_def;

SpJsInit (smftextalignment);

SpJsFinalize (smftextalignment);

SpJsHasProperty (smftextalignment);

SpJsGetProperty (smftextalignment);

SpJsSetProperty (smftextalignment);

SpJsValue js_get_strikeThru(SpBrNuiBase* view);

extern const SpJsClassDefinition smftextalignment_def;

SpJsValue js_get_common_uiproperties(const char* property, SpBrNuiBase** viewObj);
bool js_set_common_uiproperties(const char* property, SpBrNuiBase** viewObj, SpJsValue value);
SpJsValue js_get_common_allproperties(const char* property, SpBrParcelable** smfObject);
bool js_set_common_allproperties(const char* property, SpBrParcelable** smfObject, SpJsValue value);

int js_get_position_value_to_px(SpBrBase* baseData, SpJsValue value,int percentBase, bool &ret,bool& valueIsPercent,float &percentValue);
bool js_has_child_in_container(const char* property, SpBrNuiBase* view);
SpBrNuiBase* js_get_child_in_container(const char* property, SpBrNuiBase* view);

SpJsValue js_get_rounded_edge(SpBrNuiBase* view);
//SpJsValue js_get_mask(SpBrNuiBase* view);
SpJsValue js_get_lock_auto_size(SpBrNuiBase* view);
SpJsValue js_get_lock_auto_position(SpBrNuiBase* view);
SpJsValue js_get_visible(SpBrNuiBase* view);
SpJsValue js_get_touch_enabled(SpBrNuiBase* view);
SpJsValue js_get_enabled(SpBrNuiBase* view);
SpJsValue js_get_text(SpBrNuiBase* view);
SpJsValue js_get_alpha(SpBrNuiBase* view);
SpJsValue js_get_fill_color(SpBrNuiBase* view);
SpJsValue js_get_stroke_color(SpBrNuiBase* view);
SpJsValue js_get_stroke_width(SpBrNuiBase* view);
SpJsValue js_get_text_alignment(SpBrNuiBase* view);
//SpJsValue js_get_font(SpBrNuiBase* view);
//SpJsValue js_get_font_size(SpBrNuiBase* view);
SpJsValue js_get_font_color(SpBrNuiBase* view);
SpJsValue js_get_controls(SpBrNuiBase* view);
SpJsValue js_get_background_transparent(SpBrNuiBase* view);
SpJsValue js_get_layout_type(SpBrNuiContainer* view);
SpJsValue js_get_orientation(SpBrNuiContainer* view);
SpJsValue js_get_alignment(SpBrNuiContainer* view);
SpJsValue js_get_horizontal_gap(SpBrNuiContainer* view);
SpJsValue js_get_vertical_gap(SpBrNuiContainer* view);
SpJsValue js_get_auto_size(SpBrNuiContainer* view);
SpJsValue js_get_image_alignment(SpBrNuiBase* view);
SpJsValue js_get_show_on_top(SpBrNuiBase* view);

SpJsFunction (cb_gestures_getGestures);

bool js_set_rounded_edge(SpBrNuiBase* view, SpJsValue value);
bool js_set_mask(SpBrNuiBase* view, SpJsValue value);
bool js_set_lock_auto_size(SpBrNuiBase* view, SpJsValue value);
bool js_set_lock_auto_position(SpBrNuiBase* view, SpJsValue value);
bool js_set_visible(SpBrNuiBase* view, SpJsValue value);
bool js_set_touch_enabled(SpBrNuiBase* view, SpJsValue value);
bool js_set_enabled(SpBrNuiBase* view, SpJsValue value);
bool js_set_text(SpBrNuiBase* view, SpJsValue value);
bool js_set_alpha(SpBrNuiBase* view, SpJsValue value);
bool js_set_fill_color(SpBrNuiBase* view, SpJsValue value);
bool js_set_stroke_color(SpBrNuiBase* view, SpJsValue value);
bool js_set_stroke_width(SpBrNuiBase* view, SpJsValue value);
bool js_set_text_alignment(SpBrNuiBase* view, SpJsValue value, bool initial = false);
//bool js_set_font(SpBrNuiBase* view, SpJsValue value);
//bool js_set_font_size(SpBrNuiBase* view, SpJsValue value);
bool js_set_font_color(SpBrNuiBase* view, SpJsValue value);
bool js_set_background_transparent(SpBrNuiBase* view, SpJsValue value);
bool js_set_layout_type(SpBrNuiContainer* view, SpJsValue value, bool initial = false);
bool js_set_orientation(SpBrNuiContainer* view, SpJsValue value, bool initial = false);
bool js_set_alignment(SpBrNuiContainer* view, SpJsValue value, bool initial = false);
bool js_set_horizontal_gap(SpBrNuiContainer* view, SpJsValue value);
bool js_set_vertical_gap(SpBrNuiContainer* view, SpJsValue value);
bool js_set_auto_size(SpBrNuiContainer* view, SpJsValue value);
bool js_set_image_alignment(SpBrNuiBase* view, SpJsValue value);
bool js_set_show_on_top(SpBrNuiBase* view, SpJsValue value);
bool js_set_chart_string_properties(SpBrNuiBase* view, SpJsValue value, SpBrString* property);
bool js_set_returnkey(SpBrNuiEditBoxView* view, SpJsValue value,bool initial = false);
bool js_set_keyboardtype(SpBrNuiEditBoxView* view, SpJsValue value,bool initial = false);
bool js_set_inputfiltering(SpBrNuiEditBoxView* view, SpJsValue value,bool initial = false);
bool js_set_sliderdrawer_position(SpBrNuiSliderDrawer* view, SpJsValue value,bool initial = false);

TPageEffectEase js_get_page_effect_ease(SpJsValue value);
TPageEffectType js_get_page_effect_type(SpJsValue value);
TPageEffectSubType js_get_page_effect_subtype(SpJsValue value);

SpBrString* getJSArrayString(SpJsObject arrObject, const char* propertyName, const char* defaultValue);
int getJSArrayInt(SpJsObject arrObject, const char* propertyName, int defaultValue);
double getJSArrayNumber(SpJsObject arrObject, const char* propertyName, double defaultValue);
bool getJSArrayBool(SpJsObject arrObject, const char* propertyName, bool defaultValue);
bool hasJSArrayValueAsString(SpJsObject arrObject, const char* propertyName);
bool hasJSArrayValueAsNumber(SpJsObject arrObject, const char* propertyName);
bool hasJSArrayValueAsBoolean(SpJsObject arrObject, const char* propertyName);
bool hasJSArrayValueAsObject(SpJsObject arrObject, const char* propertyName);
SpJsObject getJSArrayObject(SpJsObject arrObject, const char* propertyName);
bool hasJSArrayProperty(SpJsObject arrObject, const char* propertyName);
char* getJSValueString(SpJsValue value);
double getJSValueDouble(SpJsValue value, const char *scopeString = NULL);
bool IsJSDate(SpJsValue value);
SpJsValue getJSError(const char *message);

SpUtRect *getJSArrayRectangle(SpJsObject arrObject, const char* propertyName);
SpUtRect *getJSObjectRectangle(SpJsObject objectRef);

/**
 * return null if propery doesnt exits in arrObject
 */
SpJsValue getJSArrayValue(SpJsObject arrObject, const char* propertyName);

/**
 * Calculates the number of items in a JavaScriptArray
 * @return Array count
 */
int GetArrayCount(SpJsObject arrObject);

bool IsArray(SpJsObject arrObject);

bool IsJSONParseOK(SpJsValue valueRef);

/**
 * return value is milliseconds
 */
double GetJSDateValue(SpJsValue value);

SpJsFunction (cb_smfuiobject_clone);

extern FastArray* common_ui_properties;

#endif
