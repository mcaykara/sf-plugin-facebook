/*
 * SpBrDatatableApplications.h
 *
 *  Created on: Oct 3, 2011
 *      Author: ugurkilic
 */

#ifndef SPBRDATATABLEAPPLICATIONS_H_
#define SPBRDATATABLEAPPLICATIONS_H_

#include "SpDataTable.h"

class SpBrBase;
class SpContext;

class SpBrDatatableApplications: public SpDataTable  {
public:
	SpBrDatatableApplications(SpBrBase* base, SpContext* context);
	virtual ~SpBrDatatableApplications();
#ifdef TARGET_PLATFORM_ANDROID
	std::vector<SpDataRow *> ReadFromDataSource(std::vector<SpBrString *> columnNames);
	void CommitToDataSource(SpDataSet *ds, std::vector<SpBrString *>columnNames, std::vector<SpDataRow *>rowsChanged, std::vector<SpDataRow *>rowsDeleted, bool merge,bool notifyDsets=false);
#endif

};

#endif /* SPBRDATATABLEAPPLICATIONS_H_ */
