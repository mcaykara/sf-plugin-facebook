/*
 * SpBrDatatableDeviceInfo.h
 *
 *  Created on: Oct 3, 2011
 *      Author: ugurkilic
 */

#ifndef SPBRDATATABLEDEVICEINFO_H_
#define SPBRDATATABLEDEVICEINFO_H_

#include "SpDataTable.h"

class SpBrBase;
class SpContext;

class SpBrDatatableDeviceInfo: public SpDataTable  {
public:
	SpBrDatatableDeviceInfo(SpBrBase* base, SpContext* context);
	virtual ~SpBrDatatableDeviceInfo();

public:
    std::vector<SpDataRow *> ReadFromDataSource(std::vector<SpBrString *> columnNames);
    void CommitToDataSource(SpDataSet *ds, std::vector<SpBrString *>columnNames, std::vector<SpDataRow *>rowsChanged, std::vector<SpDataRow *>rowsDeleted, bool merge,bool notifyDsets=true);

    SpBrString* GetDeviceOS();
    SpBrString* GetDeviceOSVersion();
    int GetSubplatformID();
    static SpBrString* GenerateAppID(const char* appname);
private:
    SpBrString* GenerateAppID();
};

#endif /* SPBRDATATABLEDEVICEINFO_H_ */
