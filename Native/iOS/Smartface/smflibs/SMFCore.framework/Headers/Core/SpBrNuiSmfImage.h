/*
 * SpBrNuiSmfImage.h
 *
 *  Created on: 13 Oca 2014
 *      Author: enes.gemci
 */

#ifndef __SpratIOS__SpBrNuiSmfImage__
#define __SpratIOS__SpBrNuiSmfImage__

#include "SpBrString.h"
#include "SpEventGroup.h"
#include "SpBrObject.h"
#include "SmfBlob.h"
#include "SpJsEngine/Core/SpJsEngine.h"

class SpJSCallbackGroup;
class SmfBlob;

class SpBrNuiSmfImage :SpBrObject {
public:
    static SpBrNuiSmfImage* Create(SpBrString* photoUri, bool setSize = false, SpJSCallbackGroup *tempGroup = NULL, int successId = -1, int errorId = -1);
    static SpBrNuiSmfImage* Create(SmfBlob* blob, SpJSCallbackGroup *tempGroup = NULL, int successId = -1, int errorId = -1);

	SpBrNuiSmfImage();
	SpBrNuiSmfImage(SpBrString* uri, SpJSCallbackGroup *tempGroup = NULL);
	virtual ~SpBrNuiSmfImage();

public:
	void setImageUri(SpBrString *value);
	int getWidth();
	int getHeight();
    void setWidth(int wdth);
    void setHeight(int hght);
	SpBrString* getImageUri();
	SpJsObject GetJSObjectRef();
	virtual void resize(SpEventGroup* tempEventGroup,int width, int height, TImageFormat format, float compressionRate) = 0;
	virtual void crop(SpEventGroup* tempEventGroup,int x1, int y1, int x2, int y2, TImageFormat format, float compressionRate) = 0;
	virtual void rotate(SpEventGroup* tempEventGroup,int angle, TImageFormat format, float compressionRate) = 0;
    virtual void CreateBlobObject() {};
    virtual void fireSuccess(SpEventGroup *eventGroup, const char *imagePath);
    
    SmfBlob *blobObject;
protected:
	int width;
	int height;
	SpBrString* imageUri;
    SpJsObject objectRef;
};

#endif /* defined(__SpratIOS__SpBrNuiSmfImage__) */
