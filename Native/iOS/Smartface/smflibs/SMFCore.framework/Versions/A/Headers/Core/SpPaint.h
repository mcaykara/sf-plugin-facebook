//
//  SpPaint.h
//  SpratIOS
//
//  Created by mehmet akyol on 1/6/14.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpPaint__
#define __SpratIOS__SpPaint__

#include <iostream>

class SpPaint{
    int type;
public:
    SpPaint(int typeVal);
    virtual ~SpPaint(){};
    void setType(int val);
    int getType();

};

class SpPaintPlain : public SpPaint {
    int strokeColor,fillColor,width;
    int textSize;
    char *font;

public:
    SpPaintPlain(int typeVal);
    ~SpPaintPlain();
    void setStroke(int strk);
    void setFill(int fill);
    void setWidth(int wdth);
    void setTextSize(int size);
    void setFont(const char* fnt);
    int getStroke();
    int getFill();
    int getWidth();
    int getTextSize();
    char* getFont();
};

class SpPaintLinear : public SpPaint {

    int x1,x2,y1,y2;
    int startColor,endColor;
    int width;

public:
    SpPaintLinear(int typeVal);
    void setX1(int val);
    void setX2(int val);
    void setY1(int val);
    void setY2(int val);
    void setStartColor(int clr);
    void setEndColor(int clr);
    void setWidth(int wdth);
    int getX1();
    int getX2();
    int getY1();
    int getY2();
    int getStartColor();
    int getEndColor();
    int getWidth();
};

class SpPaintGradient : public SpPaint {
    int x1,x2,y1,y2,r1,r2;
    int startColor,endColor;
    int width;

public:
    SpPaintGradient(int typeVal);
    void setX1(int val);
    void setX2(int val);
    void setY1(int val);
    void setY2(int val);
    void setR1(int val);
    void setR2(int val);
    void setStartColor(int clr);
    void setEndColor(int clr);
    void setWidth(int wdth);
    int getX1();
    int getX2();
    int getY1();
    int getY2();
    int getR1();
    int getR2();
    int getStartColor();
    int getEndColor();
    int getWidth();
};

#endif /* defined(__SpratIOS__SpPaint__) */
