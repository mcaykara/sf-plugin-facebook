/*
 * SpBrNuiSmfImageAndroid.h
 *
 *  Created on: 13 Oca 2014
 *      Author: enes.gemci
 */

#ifndef SPBRNUISMFIMAGEANDROID_H_
#define SPBRNUISMFIMAGEANDROID_H_

#include "Core/SpBrNuiSmfImage.h"
class SpUtSize;
class SmfBlob;
class SpBrNuiSmfImageAndroid: public SpBrNuiSmfImage {
private:
public:
	SpBrNuiSmfImageAndroid(SpBrString* photoUri, bool setSize = false, SpJSCallbackGroup *tempGroup = NULL, int successId = -1, int errorId = -1);
    SpBrNuiSmfImageAndroid(SmfBlob* blob, SpJSCallbackGroup *tempGroup = NULL, int successId = -1, int errorId = -1);
	SpBrNuiSmfImageAndroid();
	virtual ~SpBrNuiSmfImageAndroid();

//	void resize(int width, int height, TImageFormat format, float compressionRate);
//	void crop(int x1, int y1, int x2, int y2, TImageFormat format, float compressionRate);
//	void rotate(int angle, TImageFormat format, float compressionRate);
	void resize(SpEventGroup* tempEventGroup, int width, int height, TImageFormat format, float compressionRate);
	void crop(SpEventGroup* tempEventGroup, int x1, int y1, int x2, int y2, TImageFormat format, float compressionRate);
	void rotate(SpEventGroup* tempEventGroup, int angle, TImageFormat format, float compressionRate);
	void setSize(SpUtSize size);
	void CreateBlobObject();
};

#endif /* SPBRNUISMFIMAGEANDROID_H_ */
