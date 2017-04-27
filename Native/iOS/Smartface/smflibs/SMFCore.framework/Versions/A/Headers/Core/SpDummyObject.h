#ifndef SPDUMMYOBJECT_H_
#define SPDUMMYOBJECT_H_

#include "SpBrParcelable.h"
#include "SpBrString.h"
#include "SpBrBase.h"
#include "SpContext.h"
#include "SpBrNuiBase.h"

class SpDummyObject : public SpBrNuiBase {
public:
	SpDummyObject(SpBrBase* base, SpContext* context);
	virtual ~SpDummyObject();
    void Reset(bool invalidate = true);

public:
	virtual void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
};

#endif /* SPBRNUITEXTVIEW_H_ */
