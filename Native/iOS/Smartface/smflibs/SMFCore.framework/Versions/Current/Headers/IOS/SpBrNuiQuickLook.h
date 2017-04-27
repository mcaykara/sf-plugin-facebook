//
//  SpBrNuiQuickLook.h
//  SpratIOS
//
//  Created by Tolga Haliloğlu on 19/02/16.
//  Copyright © 2016 Smartface. All rights reserved.
//
#include "Core/SpDefs.h"
#ifdef TARGET_PLATFORM_IOS
#include <JavaScriptCore/JavaScriptCore.h>
#include "Core/SpBrParcelable.h"

#ifndef SpBrNuiQuickLook_h
#define SpBrNuiQuickLook_h

class SpBrNuiQuickLook: public SpBrParcelable{
public:
    SpBrNuiQuickLook();
    virtual ~SpBrNuiQuickLook();
    
public:
    virtual void Show()=0;
    virtual void SetDocumentPath(char *documentPath)=0;
    virtual char* GetDocumentPath()=0;
    virtual void SetNavigationBarImage(char *navigationBarImage)=0;
    virtual char* GetNavigationBarImage()=0;
    
protected:
    char *documentPath;
    char *navigationBarImage;
};

#endif /* SpBrNuiQuickLook_h */
#endif
