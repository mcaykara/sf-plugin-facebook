/*
 * SpBrDatatableContacts.h
 *
 *  Created on: Oct 3, 2011
 *      Author: ugurkilic
 */

#ifndef SPBRDATATABLECONTACTS_H_
#define SPBRDATATABLECONTACTS_H_

#include "SpDataTable.h"

class SpBrBase;
class SpContext;

class SpBrDatatableContacts: public SpDataTable  {
public:
	SpBrDatatableContacts(SpBrBase* base, SpContext* context, bool isSingle = false);
	virtual ~SpBrDatatableContacts();

public:
    std::vector<SpDataRow *> ReadFromDataSource(std::vector<SpBrString *> columnNames);
    void CommitToDataSource(SpDataSet *ds, std::vector<SpBrString *>columnNames, std::vector<SpDataRow *>rowsChanged, std::vector<SpDataRow *>rowsDeleted, bool merge,bool notifyDsets=true);

private:
    bool singleContact;
};

#endif /* SPBRDATATABLECONTACTS_H_ */
