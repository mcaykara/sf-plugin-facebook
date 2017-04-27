/*
 * SpBrDatabaseOperator.h
 *
 *  Created on: May 15, 2012
 *      Author: ugurkilic
 */

#ifndef SPBRDATABASEOPERATOR_H_
#define SPBRDATABASEOPERATOR_H_
#include "SpDefs.h"
#include <vector>
#include <list>
#include <map>
#include <string>

#ifdef TARGET_PLATFORM_ANDROID
#include <jni.h>
#endif
class SpBrString;
class SpDataSet;
class SpBrBase;
class SpDataRow;
class Database;

class SpBrDatabaseOperator {
public:
	SpBrDatabaseOperator(SpBrBase **base, bool runOnMemory);
	SpBrDatabaseOperator(SpBrBase **base, const char *specificDatabase = NULL);
    SpBrDatabaseOperator(SpBrBase **base, Database *specificDatabase);
    SpBrDatabaseOperator(SpBrBase **base, Database *specificDatabase,bool closeAndDeleteInDestructor);
	virtual ~SpBrDatabaseOperator();
    
public:
    bool BeginTransaction();
    bool CommitTransaction();
    bool RollbackTransaction();
    bool ExecuteQuery(const char *query, std::vector<char *> *paramList = NULL, std::vector<std::string> *paramVec = NULL, std::map<std::string, std::string> *paramMap = NULL);
    bool CollectInformation(const char* sql
                            , std::vector<SpBrString*> &columnNames
                            , std::vector<SpBrString*> &columnTypes
                            , std::vector<SpBrString*> &columnDefaults
                            , std::vector<bool> &columnIsPrimary);
    
    /**
     * this execute query and returns effected rows number.
     * if it is query returns false, function must return -1
     */
    bool ExecuteUpdate(const char* const &updateQuery, std::vector<char *> *paramList = NULL, std::vector<std::string> *paramVec = NULL, std::map<std::string, std::string> *paramMap = NULL);
    bool Next();
    
    SpBrString* GetStringForColumnIndex(int columnIndex);
    SpBrString* GetStringForColumnName(SpBrString *columnName);
    int GetIntegerForColumnIndex(int columnIndex);
    int ColumnCount();
    SpBrString* GetColumnNameAt(int index);
    bool TableExists(const char *tableName);
    bool HasResultSet();
	int ColumnIndexForColumnName(SpBrString *columnName);
    SpBrString* LastErrorMessage();
private:
    SpBrBase *baseData;
    void *nativeResultSet;
    void *insiderDatabase;
    bool runOnMemoryDB;
    bool closeAndDeleteInDestructor;
#ifdef TARGET_PLATFORM_ANDROID
    int cursor_key;
    jobject databaseManager;
    jclass databaseManagerClazz;
#endif
};

#endif /* SPBRDATABASEOPERATOR_H_ */
