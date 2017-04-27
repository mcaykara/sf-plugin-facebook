//
//  SpBrNuiQuickLookIOS.h
//  SpratIOS
//
//  Created by Tolga Haliloğlu on 19/02/16.
//  Copyright © 2016 Smartface. All rights reserved.
//

#include "SpBrNuiQuickLook.h"

#ifndef SpBrNuiQuickLookIOS_h
#define SpBrNuiQuickLookIOS_h

class SpBrNuiQuickLookIOS: public SpBrNuiQuickLook {
public:
    SpBrNuiQuickLookIOS();
    ~SpBrNuiQuickLookIOS();
    
public:
    void Show();
    void SetDocumentPath(char *documentPath);
    char* GetDocumentPath();
    void SetNavigationBarImage(char *navigationBarImage);
    char* GetNavigationBarImage();
};


#endif /* SpBrNuiQuickLookIOS_h */
