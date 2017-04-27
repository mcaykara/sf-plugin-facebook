/*
 * SpBrDatatableSounds.h
 *
 *  Created on: Oct 3, 2011
 *      Author: ugurkilic
 */

#ifndef SPBRDATATABLESOUNDS_H_
#define SPBRDATATABLESOUNDS_H_

#include "SpDataTable.h"

class SpBrBase;
class SpContext;

class SpBrDatatableSounds: public SpDataTable  {
public:
	SpBrDatatableSounds(SpBrBase* base, SpContext* context);
	virtual ~SpBrDatatableSounds();
#ifdef TARGET_PLATFORM_ANDROID
	std::vector<SpDataRow *> ReadFromDataSource(std::vector<SpBrString *> columnNames);
	void CommitToDataSource(SpDataSet *ds, std::vector<SpBrString *>columnNames, std::vector<SpDataRow *>rowsChanged, std::vector<SpDataRow *>rowsDeleted, bool merge,bool notifyDsets=true);
#endif
};

#endif /* SPBRDATATABLESOUNDS_H_ */
