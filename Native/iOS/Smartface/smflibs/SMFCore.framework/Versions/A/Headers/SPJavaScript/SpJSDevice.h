//
//  SpJSDevice.h
//  SpratIOS
//
//  Created by Antti Panula on 11/11/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSDevice__
#define __SpratIOS__SpJSDevice__

#include "Core/SpDefs.h"
#include <vector>
#include "SpJsEngine/Core/SpJsEngine.h"
class SpBrDatatableDeviceInfo;
class SpBrString;
class SpDataRow;

SpJsInit (smfdevice);

SpJsHasProperty (smfdevice);

SpJsGetProperty (smfdevice);

SpJsSetProperty (smfdevice);

SpJsGetPropertyNames (smfdevice);

extern SpBrDatatableDeviceInfo* smfdevice_cached_table;
extern std::vector<SpBrString *> smfdevice_system_variable_names;
extern std::vector<SpBrString *> smfdevice_system_variable_names_in_js;
/**
 * i for integer
 * b for boolean
 * s for string
 * x for special objects (like page)
 */
extern std::vector<char> smfdevice_system_variable_names_in_js_type;
extern std::vector<SpBrString *> smfdevice_table_cols_names;
extern std::vector<SpBrString *> smfdevice_table_cols_names_in_js;
/**
 * i for integer
 * b for boolean
 * s for string
 */
extern std::vector<char> smfdevice_table_cols_names_in_js_type;
extern SpDataRow* smfdevice_table_return_row;

extern const SpJsClassDefinition smfdevice_def;

#endif /* defined(__SpratIOS__SpJSDevice__) */
