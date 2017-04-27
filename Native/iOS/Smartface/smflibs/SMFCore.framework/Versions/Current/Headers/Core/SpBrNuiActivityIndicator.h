/*
 * SpBrNuiActivityIndicator.h
 *
 *  Created on: Jan 25, 2012
 *      Author: ugurkilic
 */

#ifndef SPBRNUIACTIVITYINDICATOR_H_
#define SPBRNUIACTIVITYINDICATOR_H_

#include "SpBrNuiBase.h"

class SpBrNuiActivityIndicator: public SpBrNuiBase {
public:
    static SpBrNuiActivityIndicator* Create(SpBrBase* base, SpContext* context);
    static SpBrNuiActivityIndicator* Create(SpBrNuiActivityIndicator* objectToCopy);

	SpBrNuiActivityIndicator(SpBrBase* base, SpContext* context);
    SpBrNuiActivityIndicator(SpBrNuiActivityIndicator* objectToCopy);
	virtual ~SpBrNuiActivityIndicator();

public:
    void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
	void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    void AssignDefaultValue(const char *attribute, const char *value);
    void Reset(bool invalidate = true);

protected:
    TActivityIndicatorStyle iStyle , style;

public:
    int GetStyle();
    /**
     * if setting successfully it returns true, else return false
     */
    virtual bool SetStyle(int s);
};

#endif /* SPBRNUIACTIVITYINDICATOR_H_ */
