

#ifndef SPBRNUICONTAINERANDRID_H_
#define SPBRNUICONTAINERANDRID_H_

#include "Core/SpBrNuiContainer.h"

class SpBrNuiContainerAndroid: public SpBrNuiContainer {
public:
	SpBrNuiContainerAndroid(SpBrBase* base, SpContext* context);
	SpBrNuiContainerAndroid(SpBrNuiContainerAndroid *objectToCopy);
	virtual ~SpBrNuiContainerAndroid();
	void Invalidate(bool skipMainProperty = false);
	void Load();
	void NotifyControl(SpDataSet *dataset, unsigned int datasetChangeOptions);
};

#endif
