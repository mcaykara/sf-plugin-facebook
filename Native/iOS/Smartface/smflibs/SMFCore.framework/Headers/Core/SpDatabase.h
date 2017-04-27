/*
 * SpBrDatabase.h
 *
 *  Created on: Jul 08, 2015
 *      Author: ademcayir
 */

#ifndef SPDATABASE_H_
#define SPDATABASE_H_
#include "SpDefs.h"
#include "DBInterface/Database.h"
#include "DBInterface/ResultSet.h"
#include "DBInterface/sqlite3.h"

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
namespace Smf {
    class SpFile;
}
using namespace Smf;

class SpDatabase {
    
public:
	SpDatabase(SpBrBase *base,SpBrString* path);
	virtual ~SpDatabase();

public:

    void RunScript(SpBrString* scriptFile);
    void RunScript(SpFile* scriptFilePath);
    bool Execute(SpBrString* sql,std::vector<SpBrString*> &parameters);
    
    /**
     it collectes values and return as map. map has to be freed
     
     */
    
    std::vector<std::vector<SpBrString* > > ExecuteQueryToMap(SpBrString* sql);
    SpBrString* Open();
    void Close();
    bool IsOpen();
    bool IsSelectQuery(SpBrString* sql);
    /**
     don't delete or modify return value
     
     */
    SpBrString* GetPath();
    /**
     don't delete or modify return value
     
     */
    SpBrString* GetFullPath();
    
    Database* GetDatabaseInstance();
    bool CanBeDeleted();
    void AddChildDataset(SpDataSet* dataset);
    void RemoveChildDataset(SpDataSet* dataset);
    void SetJSValue(SpJsValue jsValue);
    SpJsValue GetJSValue();
    void setAppMainDatabase(bool b);
    bool IsAppMainDatabase();
    
private:
    bool app_main_database;
    SpBrBase *baseData;
    SpBrString* path;
    SpBrString* fullpath;
    bool is_open;
    Database* database_ref;
    std::map<SpDataSet*,bool> child_datasets;
    SpJsValue jsValue;
    bool jsValueProtected;
};

#endif /* SPBRDATABASEOPERATOR_H_ */
