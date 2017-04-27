/*
 *
 *  Created on: 3 Oca 2014
 *      Author: enes.gemci
 */

#include "Core/SpBrNuiCanvas.h"

#ifndef SPBRNUICANVASANDROID_H_
#define SPBRNUICANVASANDROID_H_

class SpBrNuiCanvasAndroid: public SpBrNuiCanvas {
public:
	SpBrNuiCanvasAndroid(SpBrBase* base, SpContext* context);
	SpBrNuiCanvasAndroid(SpBrNuiCanvasAndroid* objectToCopy);
	virtual ~SpBrNuiCanvasAndroid();
	void Load();
	void Invalidate(bool without = false);
	void Reset(bool invalidate = true);
	SpBrParcelable* Clone();

	void AddToLayout();
	void RemoveFromLayout();


public:
	void drawLine(int x1,int y1,int x2,int y2,int type,void *paint);
	void drawRect(int x1,int y1,int x2,int y2,int type,void *paint);
	void drawRoundRect(int x1, int y1, int x2, int y2, int roundX, int roundY, int type, void *paint);
	void drawCircle(int x,int y,int round,int type,void *paint);
	void drawArc(int x1,int y1,int x2,int y2,bool useCenterLines,int startAngle,int endAngle,int type,void* paint);
	void drawText(char* text,int x1,int y1,int type,void *paint);
	void drawPolygon(std::vector<SpUtPoint*> pointVector,int type,void *paint);
	void redraw();
	void drawImage(std::vector<SpUtPoint*> srcVector, std::vector<SpUtPoint*> destVector, SpBrString* imageUri);
	SpBrString * getImage();

	void setValuesToUI();
};

#endif /* SPBRNUICANVASANDROID_H_ */
