/*
 * SpBrNuiGesture.h
 *
 *  Created on: May 10, 2013
 * Author: adem
 */

#ifndef SPBRNUIGESTURE_H_
#define SPBRNUIGESTURE_H_

#include "SpBrNuiBase.h"

class SpBrNuiGesture: public SpBrNuiBase {
public:
    static SpBrNuiGesture* Create(SpBrBase* base, SpContext* context);
    static SpBrNuiGesture* Create(SpBrNuiGesture* objectToCopy);

    SpBrNuiGesture(SpBrBase* base, SpContext* context);
    SpBrNuiGesture(SpBrNuiGesture* objectToCopy);
    virtual ~SpBrNuiGesture();

public:
    void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void Reset(bool invalidate = true);
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    void AssignDefaultValue(const char *attribute, const char *value);
};

#endif /* SPBRNUIRECTANGLE_H_ */
