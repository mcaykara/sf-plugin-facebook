//
//  SpJSApplication.h
//  SpratIOS
//
//  Created by Antti Panula on 11/6/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpJSDatasetParameter_h
#define SpratIOS_SpJSDatasetParameter_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"
class SpDataSet;

class DatasetParameter {
public:
	SpDataSet* dataset;
	int parameter_index;
};

SpJsInit (smfdatasetparameter);

SpJsHasProperty (smfdatasetparameter);

SpJsGetProperty (smfdatasetparameter);

SpJsSetProperty (smfdatasetparameter);

void smfdatasetparameter_finalize(SpJsObject object);

SpJsGetPropertyNames (smfdatasetparameter);

extern const SpJsClassDefinition smfdatasetparameter_def;




#endif
