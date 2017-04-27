#include "SpJsEngine/Core/SpJsEngine.h"
//
//  SpJSFunctionsNavigation.h
//  SpratIOS
//
//  Created by Antti Panula on 1.11.2012 -- 1.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSFunctionsDataset_h
#define SpratIOS_SpJSFunctionsDataset_h

SpJsFunction (cb_dataset_add);
SpJsFunction (cb_dataset_clear);
SpJsFunction (cb_dataset_commit);
SpJsFunction (cb_dataset_deleteRow);
SpJsFunction (cb_dataset_move);
SpJsFunction (cb_dataset_moveFirst);
SpJsFunction (cb_dataset_moveLast);
SpJsFunction (cb_dataset_moveNext);
SpJsFunction (cb_dataset_movePrevious);
SpJsFunction (cb_dataset_refresh);
SpJsFunction (cb_dataset_notify);
SpJsFunction (cb_dataset_seek);
SpJsFunction (cb_dataset_getValue);
SpJsFunction (cb_dataset_getColumnArray);
SpJsFunction (cb_dataset_execute);
SpJsFunction (cb_dataset_setValue);
SpJsFunction (cb_dataset_isColumnSecure);
SpJsFunction (cb_dataset_setColumnSecure);
SpJsFunction (cb_dataset_setAllColumnSecure);

#endif
