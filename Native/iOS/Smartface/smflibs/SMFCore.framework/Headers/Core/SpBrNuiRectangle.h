/*
 * SpBrNuiRectangle.h
 *
 *  Created on: Aug 18, 2011
 *      Author: ugurkilic
 */

#ifndef SPBRNUIRECTANGLE_H_
#define SPBRNUIRECTANGLE_H_

#include "SpBrNuiBase.h"

class SpBrNuiRectangle: public SpBrNuiBase {
public:
    static SpBrNuiRectangle* Create(SpBrBase* base, SpContext* context);
    static SpBrNuiRectangle* Create(SpBrNuiRectangle* objectToCopy);

    SpBrNuiRectangle(SpBrBase* base, SpContext* context);
    SpBrNuiRectangle(SpBrNuiRectangle* objectToCopy);
    virtual ~SpBrNuiRectangle();

public:
    void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void Reset(bool invalidate = true);
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    void AssignDefaultValue(const char *attribute, const char *value);
public:
    int iColor, color;
    int iRotation, rotation;
    //bool iFill, fill;
    bool iFillGradient, fillGradient;
    int iStartColor, startColor;
    int iEndColor, endColor;
    int gradientOrientation;
// JS Stuff
};

#endif /* SPBRNUIRECTANGLE_H_ */
