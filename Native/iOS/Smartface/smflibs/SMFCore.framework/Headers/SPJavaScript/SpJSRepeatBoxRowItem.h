//
//  SpJSRepeatBoxRowTemplate.h
//
//  Created by adem on 26.12.2012 -- 1.
//

#ifndef SpratIOS_SpJSRepeatBoxItem_h
#define SpratIOS_SpJSRepeatBoxItem_h

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfrepeatboxrowitem);
SpJsHasProperty (smfrepeatboxrowitem);
SpJsGetProperty (smfrepeatboxrowitem);
SpJsSetProperty (smfrepeatboxrowitem);
SpJsFinalize (smfrepeatboxrowitem);
SpJsGetPropertyNames (smfrepeatboxrowitem);

class SpNuiRepeatBox;

typedef struct smfRepeatboxRowItemData
{
	SpNuiRepeatBox* repeatBox;
	int rowIndex;
} SmfRepeatboxRowItemData;

extern const SpJsClassDefinition smfrepeatboxrowitem_def;


#endif
