/*
 * SpDataRow.h
 *
 *  Created on: Sep 12, 2011
 *      Author: ugurkilic
 */

#ifndef SPDATAROW_H_
#define SPDATAROW_H_

#include <vector>
#include <pthread.h>

class SpBrString;
class SpDataSet;

class SpDataRow {
public:
	SpDataRow(int rowid, std::vector<SpBrString *> cellVals, bool copyCells = true);
	virtual ~SpDataRow();

public:
    int GetLength();
    bool IsNull();
    void SetValue(int column, SpBrString *value);
    void SetArray(std::vector<SpBrString *> array);
    SpBrString* GetSortValue(int column);
    SpBrString* GetValue(int column);
    void PrintRow(SpDataSet* dataSet);
    void ClearTemps();
public:
    std::vector<SpBrString *> cellValues;
    int rowID;
    pthread_mutex_t lock;
};

#endif /* SPDATAROW_H_ */
