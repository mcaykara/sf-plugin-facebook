#include "SpJsEngine/Core/SpJsEngine.h"
//
//  SpJSFunctionsMap.h
//
//  Created by adem on 05.12.2012 -- 1.
//

#ifndef SpratIOS_SpJSFunctionsMap_h
#define SpratIOS_SpJSFunctionsMap_h

/**
 *  void SMF.UI.Map.showRoute (Latitude1, Longitude1, Latitude2, Longitude2)
 *
 */
SpJsFunction (cb_map_showRoute);

/**
 *  void SMF.UI.Map.lookupPosition (Latitude, Longitude)

 */
SpJsFunction (cb_map_lookupPosition);

#endif
