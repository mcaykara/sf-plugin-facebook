/*
 * SpDataSet.h
 *
 *  Created on: Aug 22, 2011
 *      Author: ugurkilic
 */

#ifndef SPDATASET_H_
#define SPDATASET_H_

#include "SpBrParcelable.h"
#include "SpBrBase.h"
#include <vector>
#include <map>
#include <set>
#include "SpJsEngine/Core/SpJsEngine.h"

class SpDataSource;
class SpContext;
class SpDataBridge;
class SpDataTable;
class SpDataRow;
class SpBrNuiBase;
class SpBrDatabaseOperator;
class SmfDataParameter;
class SpDatabase;

/**
 * Dataset class which holds the values of datatables in rows
 * Responsible for the data exchange between user and datatable
 * Includes methods for filtering, sorting and selecting distinct values
 * Notifies bounded objects when any change happens
 * Never delete the cell value (SpBrString object) you call from this class!!
 */

class SpDataSet: public SpBrParcelable {
public:
    /**
     * DataFilterType Enumeration
     * Used for differ data filtering conditions
     */
    typedef enum {
        DFCEquals = 0,
        DFCLess,
        DFCLessOrEqual,
        DFCGreater,
        DFCGreaterOrEqual,
        DFCNotEqual,
        DFCContains,
        DFCStartsWith,
        DFCEndsWith  
    } TDataFilterCondition;
    
public:
    /**
     * Constructor
     * @param base Application's SpBrBase object
     * @param context Application's SpContext object
     */
	SpDataSet(SpBrBase *base, SpContext *context);
    
    /**
     * Destructor
     */
	virtual ~SpDataSet();
    
public:
    /**
     * Parsing from .smf source file
     * @param datasource SpDataSource holds .smf buffer
     * @param objects Initialized objects vector
     */
    void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
        
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    
    void addBoundedObject(SpBrParcelable* objectToAdd);
    void RemoveBoundedObject(SpBrParcelable *objectToRemove);
    
public:
    /**
     * Reads the dataset's elements from the source table
     */
    bool ObtainData();
    
    /**
     * Saves the dataset into connected table
     * @param merged If there's a change in existing rows or not
     */
    void CommitData(int source=-1,bool merged = true,bool notifyDsets= true);
    
    /**
     * Adds new row to the dataset
     */
    void AddNewRow(bool notify = true, bool fromNetwork = false);
    
    /**
     * Deletes the current row
     */
    void DeleteRow(bool notify = true);
    
    /**
     * Updates current row index
     * 
     * @param rowIndex Index of the row to be searched
     * @return True if seek successful
     */
    bool Seek(int rowIndex);
    
    /**
     * Empties the row vectors.
     */
    void ClearCache();
    
    /**
     * Deletes all the rows (for clear dataset action)
     */
    void ClearRows();
    
    /**
     * Returns the index of the current row
     * @return Current index
     */
    int GetRowIndex();
    
    /**
     * Returns the number of rows in the dataset
     * @return Row count
     */
    int GetRowCount();
    
    /**
     * Gets the datarow which is active
     * @return Current datarow
     */
    // it decrease thread safe dataset. I removed this function. you should use GetCellValue
    //SpDataRow* GetCurrentDataRow();
    /**
     * it is copy of current datarow. you must delete it after use it
     * even in row rendering, it returns current dataset index row
     */
    SpDataRow* GetCurrentDataRowCopy();

    /**
     * Returns the index of the column
     * @param columnName Name of the column
     * @return Index of column in table
     */
    int GetColumnIndex(SpBrString *columnName);
    
    /**
     * Returns the index of the column
     * @param columnName Name of the column
     * @return Index of column in table
     */
    int GetColumnIndex(const char *columnName);
    
    /**
     * Returns the name of the column
     * @param index Index of the column
     * @return Name of column in table
     */
    SpBrString* GetColumnName(int index);
    
    /**
     * Returns the type of the column.
     * @param index Index of the column.
     * @return Type of the column
     */
    TDataTableColumnType GetColumnType(int index);
    
    /**
     * Returns the cell value specified with the column name
     * 
     * @param columnName Column name of the cell
     * @return The value of the cell
     */
    SpBrString* GetCellValue(SpBrString *columnName);
    
    /**
     * Returns the cell value specified with the column index
     *
     * @param columnIndex Column index of the cell
     * @return The value of the cell
     */
    SpBrString* GetCellValueDD(int columnIndex);
    
    /**
     * Returns the cell value specified with the column name and ROW
     *
     * After smf version 620, dataset column names are sent with [tablename.] syntax
     * Sending force as true will ignore that case.
     *
     * @param columnName Column name of the cell
     * @return The value of the cell
     */
    SpBrString* GetCellValue(SpBrString *columnName, int specificRowIndex, bool forced = false);

    SpBrString* GetValueWithRowIndex(int columnIndex, int rowIndex);

    /**
     * Returns the cell value specified with column and row index
     * 
     * @param columnIndex Column index of the cell
     * @param rowIndex Row index of the cell     
     * @return The value of the cell
     */    
    //SpBrString* GetValueFromColumnIndex(int columnIndex, int rowIndex);
    
    /**
     * Sets a given value to the cell specified with column name in the data row
     * SpDataRow always copies and holds it's value itself, so remove value you have sent here
     *
     * @param columnName Column name of the cell.
     * @param value New value to be set in the cell.
     */
    void SetCellValue(SpBrString *columnName, SpBrString *value, bool fromNetwork = false);
    
    /**
     * Sets a given value to the cell specified with column name in the data row
     * SpDataRow always copies and holds it's value itself, so remove value you have sent here
     *
     * @param columnIndex Column index of the cell.
     * @param value New value to be set in the cell.
     */
    void SetCellValue(int columnIndex, SpBrString *value,bool fromNetwork=false);
    
    /**
     * Getting the datatable of dataset
     * @return Connected datatable
     */
    SpDataTable* GetDataTable();
    
    /**
     * This is just used for custom actions (show route)
     */
    void SetDataTable(SpDataTable* d);
    
    /**
     * Saves the preserved states of all dataset elements in a file.
     * Preserved state ="DataSetPreserve" + dataset id + rowindex.
     */
    void RecordPreservedState();
    
    /**
     * Checks for dataset changes and notifies the bounded objects except the excluded one
     * @param dataSetChange Change type.
     * @param excludedObject Object that will not be checked.
     */
    void NotifyDataControls(unsigned int datasetChangeOptions, SpBrNuiBase *excludedObject, bool fromNetwork = false);
    
    /**
     * Checks for dataset changes and notifies the bounded objects
     * @param dataSetChange Change type.
     */
    void NotifyDataControls(unsigned int datasetChangeOptions, bool fromNetwork = false);
    
    /**
     * Combines two NotifyDataControls method above
     */
    void DoNotifyDataControls(unsigned int datasetChangeOptions, SpBrNuiBase *excludedObject, bool fromNetwork = false);
    
    /**
     * Lock dataset for read&write
     */
    void LockDataset();
    
    /**
     * Unlock dataset for read&write
     */
    void UnlockDataset();

    /**
     * Moves the row to new position
     * @param oldPath Index of row
     * @param newPath Row's new index
     */
    void Move(int oldPath, int newPath,bool notify=true);
    
    /**
     * Deletes the row at specified index
     * @param index Index of the row which will be deleted
     */
    void DeleteRowWithIndex(int index, bool notify = true);
    
    /**
     * Check if the dataset uses multiple tables or not
     */
    void CheckIfMultiTable();
    
    void SetDatabase(SpDatabase* database);
    
    SpDatabase* GetDatabase();
    
    bool IsSecure();
    
    int GetPrimaryColumnIndex();
    
    SpBrString* GetPrimaryColumn();
    
    
private:
    /**
     * Checks if dataset connected to a device table,
     * If so fills the values into database.
     */
    void CheckIfDeviceTable();
    
    /*
     * Executes the SQL query and fills the columns of dataset
     * Whatever the queryString is, result is limited with the columns of database
     * @param queryString SQL query
     * @param fillDistinctRows Flag to decide whether fill the distinctFilteredRows array or not
     * @return The vector of resulting SpDataRows
     */
    std::vector<SpDataRow *> ReadFromDatabase(const char *queryString, bool &success, bool fillDistinctRows = false);
    
    /**
     * Fills the row array with results retrieved via SQL query.
     * @param rowArray SpDataRow array to be filled
     * @param query SQL query to be executed
     * @param columnOffset Used for filtered rows array (look distinctFilteredRows vector)
     * @return Result code
     */
    int FillArrayWith(std::vector<SpDataRow *>& rowArray, const char query[], int columnOffset = 0, std::vector<std::string> *paramVec = NULL, std::map<std::string, std::string> *paramMap = NULL, std::vector<char *> *paramList = NULL);
    
    /**
     * Returns the index of the column
     * After smf version 620, dataset column names are sent with [tablename.] syntax
     * This method will ignore that case.
     * @param columnName Name of the column
     * @return Index of column in table
     */
    int GetColumnIndexForced(SpBrString *columnName);
    

    /**
     * Updates row index using given row id
     * If It was different before, notifies connected controls
     * @param _rowID Rowid of the row
     */
    void SetRowIndexFromRowID(int _rowID);
    
    /**
     * Gets the incremented value for cell
     */
    int GetMaximumIncrement(int field);
    
    /**
     * Removes the deleted row from deleted rows array
     */
    void RemoveDeletedRowFromDeletedRows(SpDataRow *row);
    
    /**
     * Changes the temp_ prefixes of the values.
     * Called after commits.
     */
    void ChangeTempValues();
    
private:
    /**
     * Application's SpContext object
     */
    SpContext *context;
    
    /**
     * Connected table
     */
    SpDataTable *dataTable;
    
    /**
     * Column will be used while sorting
     */
    SpBrString *sortColumn;
    
    /**
     * Current data row
     */
    SpDataRow *currentDataRow;
    
    /**
     * Vector of dataset rows
     */
    std::vector<SpDataRow *> rows;
    
    /**
     * Vector of deleted rows which will be cleared after commit
     */
    std::vector<SpDataRow *> deletedRows;
    
    /**
     * Vector of rows which are distinct and filtered
     */
    std::vector<SpDataRow *> distinctFilteredRows;
    
    /**
     * Current row index
     */
    int rowIndex;
    
    /**
     * Variables for concurrency
     */
    pthread_mutex_t cacheLock;

    pthread_mutex_t concurrencyLock;

    SpDatabase* database;
    
    /**
     * Vector of all column type
     */
    std::vector<TDataTableColumnType> columnTypes;
    
    
    /**
     * Vector of all column type
     */
    std::vector<SpBrString*> columnDefaults;
    
    /**
     * Vector of all column type
     */
    std::vector<bool> columnIsPrimary;
    
    
public:
    /**
     * Latest SQL command executed for DataSet
     */
    SpBrString *sqlCommand;
    
    /**
     * Insert command that will be executed during FastCommit
     */
    SpBrString *insertCommand;
    
    /**
     * Delete command that will be executed during FastCommit
     */
    SpBrString *deleteCommand;
    
    /**
     * Vector of all column's names
     */
    std::vector<SpBrString *> columnNames;

    /**
     * Vector of all parameter names used in SQL database
     */
    std::vector<SpBrString *> parameterNames;
    
    /**
     * Columns which will be looked while filtering
     */
    std::vector<SpBrString *> filterColumns;
    
    /**
     * Bounded UI objects
     */
    std::vector<SpBrParcelable *> boundedControls;
    
    /**
     * Bounded editbox placeholders
     */
    std::vector<SpBrParcelable *> boundedEditboxPlaceholders;
    
    /**
     * UI controls used in SQL as parameter
     */
    std::vector<SpBrParcelable *> boundedParameterControls;
    
    /**
     * Filter values for filterColumns
     */
    std::vector<SpBrParcelable *> filterDataBridges;
    
    /**
     * Vector of all column's IDs'
     */
    std::vector<char> columnIDs;
    
    /**
     * Vector of operators which will be used while filtering
     */
    std::vector<char> filterOperators;
    
    /**
     * Vector of table's isSecure values for the columnNames respectively.
     */
    std::vector<bool> columnIsSecure;

    /**
     * Dataset id
     */
    int dataSetId;

    /**
     * Sorting direction
     */
    bool sortDirection;
    
    /**
     * If commiting automatically to table is enabled or not
     */
    bool autoCommitFlag;
    
    /**
     * If preserving the index of current column is enabled or not
     */    
    bool preserveState;
    
    /**
     * When preserveState is true, whether preserve state is already read or not
     */
    bool preserveStateProcessed;

    /**
     * True if only distinct values are requested
     */
    bool isDistinct;
    
    /**
     * True if table ever seeked
     */
    bool isSeeked;
    
    /**
     * Variable to get the corresponding value of rendering row for a repeatbox.
     * When a row rendering started, change this value to that row's index;
     * After row rendered, set it to -1 again.
     */
    int repeatboxRenderingIndex;
    
    /**
     * Checks if device has data from more than one table.
     */
    bool hasMultipleTable;
    
    /**
     * True if dataset is created dynamically
     */
    bool isDynamicDataset;
    
    /**
     * If dynamic dataset event is cancelled inside event
     */
    bool isCanceled;
    
    SpJsObject argumentsOfDS;
    int commitSource;
    bool commitError;
    
    /**
     * For dynamic dataset, sql command may change at runtime
     * Do additional stuff (recreating columnNames array etc.) according to this flag
     */
    bool sqlCommandChanged;
    
    /**
     * For dynamic dataset, flag sets if fastCommit method will be used or not
     */
    bool fastCommit;
    
    /**
     * True if dataset is locked by us (for autoCommit etc., used on ios to fix event concurrency)
     */
    bool iLock;
};

#endif /* SPDATASET_H_ */
