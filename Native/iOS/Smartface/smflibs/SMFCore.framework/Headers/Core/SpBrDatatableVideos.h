/*
 * SpBrDatatableVideos.h
 *
 *  Created on: Oct 3, 2011
 *      Author: ugurkilic
 */

#ifndef SPBRDATATABLEVIDEOS_H_
#define SPBRDATATABLEVIDEOS_H_

#include "SpDataTable.h"

class SpBrBase;
class SpContext;

class SpBrDatatableVideos: public SpDataTable  {
public:
	SpBrDatatableVideos(SpBrBase* base, SpContext* context);
	virtual ~SpBrDatatableVideos();
#ifdef TARGET_PLATFORM_ANDROID
	std::vector<SpDataRow *> ReadFromDataSource(std::vector<SpBrString *> columnNames);
	void CommitToDataSource(SpDataSet *ds, std::vector<SpBrString *>columnNames, std::vector<SpDataRow *>rowsChanged, std::vector<SpDataRow *>rowsDeleted, bool merge,bool notifyDsets=true);
#endif
};

#endif /* SPBRDATATABLEVIDEOS_H_ */
