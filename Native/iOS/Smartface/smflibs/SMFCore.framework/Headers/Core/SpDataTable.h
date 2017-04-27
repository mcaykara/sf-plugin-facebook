/*
 * SpDataTable.h
 *
 *  Created on: Aug 22, 2011
 *      Author: ugurkilic
 */

#ifndef SPDATATABLE_H_
#define SPDATATABLE_H_

#include "SpBrParcelable.h"
#include "SpBrBase.h"
#include <vector>

class SpDataSource;
class SpContext;
class SpDataSet;
class SpDataRow;

class SpDataTable: public SpBrParcelable {
private:
	bool runOnMemory;
public:
	SpDataTable(SpBrBase *base, SpContext *context);
	virtual ~SpDataTable();

public:
    void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void BindDataSet(SpDataSet *ds);
    TDataTableColumnType FetchColumnType(SpBrString *columnTypeString);
    virtual std::vector<SpDataRow *> ReadFromDataSource(std::vector<SpBrString *> columnNames);
    void CommitToDataSource(SpDataSet *ds, std::vector<SpDataRow *>rows,bool notifyDsets=true);
    virtual void CommitToDataSource(SpDataSet *ds, std::vector<SpBrString *>columnNames, std::vector<SpDataRow *>rowsChanged, std::vector<SpDataRow *>rowsDeleted, bool merge,bool notifyDsets=true);
    int GetColumnType(SpBrString *columnName);
    TDataTableColumnType GetColumnType(int ix);
    SpBrString* GetColumnDefaultValue(SpBrString *columnName);
    bool IsColumnAutoIncremented(SpBrString *columnName);
    bool IsColumnSecure(SpBrString *columnName);
    int GetColumnIndex(SpBrString *columnName);
    int GetColumnCount();
    void SetName(SpBrString* n);
    SpBrString* GetTableFilePath();
    bool IsRunOnMemory();

public:
    std::vector<SpBrString *> columnNames;
    std::vector<SpBrString *> columnDefaultValues;
    std::vector<SpDataSet *> boundedDataSets;
    SpBrString *tableGuid;
    std::vector<TDataTableColumnType> columnTypes;
    bool *columnAutoIncrementFlags;
    bool *columnIsSecure;

    SpContext *context;

    int dataTableId;
    bool overrideOnUpdate;
    bool isSecure;
    int GetPrimaryKeyColumnIndex();
    int GetPrimaryKeyColumnAssistantIndex();
    int GetForeingKeyColumnIndex();
    SpDataTable* GetForeingTable();
public:
    int primaryKeyColumnIndex;
    int primaryKeyColumnAssistant;
    int foreingKeyColumnIndex;
    SpDataTable* foreingTable;
};

#endif /* SPDATATABLE_H_ */
