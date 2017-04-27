//
//  SpBrNuiCanvasIOS.h
//  SpratIOS
//
//  Created by mehmet akyol on 12/31/13.
//  Copyright (c) 2013 Bivium. All rights reserved.
//

#ifndef SpratIOS_SpBrNuiCanvasIOS_h
#define SpratIOS_SpBrNuiCanvasIOS_h

#include "Core/SpBrNuiBase.h"
#include "Core/SpBrNuiCanvas.h"

class SpBrNuiCanvasIOS: public SpBrNuiCanvas {
public:
	SpBrNuiCanvasIOS(SpBrBase* base, SpContext* context);
    SpBrNuiCanvasIOS(SpBrNuiCanvasIOS* objectToCopy);
    virtual ~SpBrNuiCanvasIOS();
public:
	void Load();
    void Unload();
    void Invalidate(bool skipMainProperty = false);
    void StopCanvas();
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
    void setValuesToUI(){};
    void setLoopEnabled(bool value);
    void setLoopPeriod(int value);
};


#endif
