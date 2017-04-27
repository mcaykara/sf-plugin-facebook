//
//  SpJSDataResult.h
//  SpratIOS
//
//  Created by ugur kilic on 26/8/13.
//  Copyright (c) 2012 Bivium. All rights reserved.
//

#ifndef __SPRATIOS__SPJSDATARESULT__
#define __SPRATIOS__SPJSDATARESULT__

#include <vector>

#include "Core/SpDefs.h"
#include "Core/SpDataRow.h"
#include "Core/SpBrString.h"
#include "SpJsEngine/Core/SpJsEngine.h"

class SmfDataResult {
public:
    ~SmfDataResult();

    std::vector<SpBrString *> dataColumns;
    std::vector<SpDataRow *> dataRows;
};

SpJsInit (smfdataresult);
SpJsHasProperty (smfdataresult);
SpJsGetProperty (smfdataresult);
SpJsFinalize (smfdataresult);
SpJsGetPropertyNames (smfdataresult);

extern const SpJsClassDefinition smfdataresult_def;

#endif /* __SPRATIOS__SPJSDATARESULT__ */
