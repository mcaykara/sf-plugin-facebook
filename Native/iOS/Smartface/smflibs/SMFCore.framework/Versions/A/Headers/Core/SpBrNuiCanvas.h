//
//  SpBrNuiCanvas.h
//  SpratIOS
//
//  Created by mehmet akyol on 12/31/13.
//  Copyright (c) 2013 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpBrNuiCanvas__
#define __SpratIOS__SpBrNuiCanvas__

#include "SpBrNuiBase.h"
#include "SpPaint.h"
#include <vector>

class SpBrNuiCanvas: public SpBrNuiBase {
public:
    SpBrNuiCanvas(SpBrBase* base, SpContext* context);
    SpBrNuiCanvas(SpBrNuiCanvas* objectToCopy);
    virtual ~SpBrNuiCanvas();

public:
    void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void Reset(bool invalidate = true);
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    void AssignDefaultValue(const char *attribute, const char *value);

    virtual void drawLine(int x1,int y1,int x2,int y2,int type,void *paint) = 0;
    virtual void drawRect(int x1,int y1,int x2,int y2,int type,void *paint) = 0;
    virtual void drawRoundRect(int x1, int y1, int x2, int y2, int roundX, int roundY, int type, void *paint) = 0;
    virtual void drawCircle(int x,int y,int round,int type,void *paint) = 0;
    virtual void drawArc(int x1,int y1,int x2,int y2,bool useCenterLines,int startAngle,int endAngle,int type,void* paint) = 0;
    virtual void drawText(char* text,int x1,int y1,int type,void *paint) = 0;
    virtual void drawPolygon(std::vector<SpUtPoint*> pointVector,int type,void *paint) = 0;
    virtual void redraw() = 0;
    virtual void drawImage(std::vector<SpUtPoint*> srcVector, std::vector<SpUtPoint*> destVector, SpBrString* imageUri) = 0;
    virtual SpBrString * getImage() = 0;

public:
    virtual void setLoopEnabled(bool value);
    virtual void setLoopPeriod(int value);
    bool getLoopEnabled();
	int getLoopPeriod();

	virtual void setValuesToUI() = 0;
private:
    int loopPeriod;
	bool loopEnabled;
};


#endif /* defined(__SpratIOS__SpBrNuiCanvas__) */
