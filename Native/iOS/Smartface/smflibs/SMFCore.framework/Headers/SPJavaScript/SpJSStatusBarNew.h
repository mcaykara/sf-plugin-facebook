//
//  SpJSStatusBarNew.h
//
//  Created by nosaiba on 29/12/14.
//
//
#ifndef __SpratIOS__SpJSStatusBarNew__
#define __SpratIOS__SpJSStatusBarNew__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsInit (smfstatusbarnew);
SpJsHasProperty (smfstatusbarnew);
SpJsGetProperty (smfstatusbarnew);
SpJsSetProperty (smfstatusbarnew);
SpJsGetPropertyNames (smfstatusbarnew);
SpJsConstructor (smfstatusbarnew);
SpJsFinalize (smfstatusbarnew);
SpJsFunction (cb_smfstatusbarnew_height);

extern const SpJsClassDefinition smfstatusbarnew_def;

typedef struct StatusBarNewStruct {
    bool visible;
    bool transparent;
    int background;
    //style ios
    int height;

}StatusBarNewStruct;

#endif /* defined(__SpratIOS__SpJSStatusBarNew__) */
