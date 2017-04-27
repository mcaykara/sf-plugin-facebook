//
//  SpBrNuiSmfImageIOS.h
//  SpratIOS
//
//  Created by mehmet akyol on 1/13/14.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#import "Core/SpBrNuiSmfImage.h"
#import "Core/SpBrString.h"
#import "Core/SpJSCallbackGroup.h"

class SmfBlob;

class SpBrNuiSmfImageIOS: public SpBrNuiSmfImage {
public:
    SpBrNuiSmfImageIOS(SpBrString* photoUri, bool setSize = false, SpJSCallbackGroup *tempGroup = NULL, int successId = -1, int errorId = -1);
    SpBrNuiSmfImageIOS(SmfBlob* blob, SpJSCallbackGroup *tempGroup = NULL, int successId = -1, int errorId = -1);
    virtual ~SpBrNuiSmfImageIOS();

    void resize(SpEventGroup* tempEventGroup,int width, int height, TImageFormat format, float compressionRate);
    void crop(SpEventGroup* tempEventGroup,int x1, int y1, int x2, int y2, TImageFormat format, float compressionRate);
    void rotate(SpEventGroup* tempEventGroup,int angle, TImageFormat format, float compressionRate);

    void resizeImage(void *imageData, TImageFormat imageFormat, int width, int height, float compressionRate, SpEventGroup *eventGroup);
    void cropImage(void *imageData, int x1, int y1, int x2, int y2, TImageFormat format, float compressionRate, SpEventGroup *eventGroup);
    void rotateImage(void *imageData, int angle, TImageFormat format, float compressionRate, SpEventGroup *eventGroup);

    bool writeImageToFile (void **imageDataPtr, void *path, float compressionRate, TImageFormat format);
    void fireError(SpEventGroup *eventGroup, const char *message);

    void CreateBlobObject();
    void* GetFileName(TImageFormat format);

    static void* GenerateFileName(TImageFormat format);
};
