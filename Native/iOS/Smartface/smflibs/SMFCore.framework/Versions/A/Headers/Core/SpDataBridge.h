/*
 * SpDataBridge.h
 *
 *  Created on: Aug 9, 2011
 *      Author: ugurkilic
 */

#ifndef SPDATABRIDGE_H_
#define SPDATABRIDGE_H_

#include "SpBrParcelable.h"
#include "SpBrBase.h"
#include <vector>

class SpDataSource;
class SpBrString;
class SpContext;

class SpDataBridge: public SpBrParcelable {
public:
    SpDataBridge(SpBrBase* baseData);
	SpDataBridge(SpBrBase *base, SpContext *context);
    SpDataBridge(SpBrString *col, char byte, SpBrParcelable *obj);
	virtual ~SpDataBridge();
    
public:
    void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
	
private:
    std::vector<SpBrString*> iDataPathStrings;
    std::vector<int> iDataHolderInts;
    std::vector<char> iBindingTypeBytes;
    std::vector<SpBrParcelable*> iDataHolderElements;
    SpContext *context;
    
public:
    SpBrString* DataPathString();
    int DataHolderInt();
    char BindingTypeByte();
    SpBrParcelable* DataHolderElement();
    
public:
    SpBrString* GetValue();
    int GetIntegerValue();
    void SetValue(SpBrString *value, bool fromNetwork = false);
    void SetIntegerValue(int value);
    void EvaluateBind(SpBrParcelable* source);
    void InitBind(SpBrParcelable* source);
    SpDataSet* GetBindDataset();
    SpBrString* GetBindDatasetColumn();
    BVTypes GetBindValueType();

    int bindValueType;
    bool IsRepeatField();
    void SetRepeatField(bool re);
    SpDataSet* GetParentDataset();
    void SetParentDataset(SpDataSet* );
    
private:
    //int bindValueType;
    SpDataSet* bindDataset;
    SpBrString* bindDatasetColumn;
    // this defines this databridge is repeat element in web objects
    bool repeatField;
    SpDataSet* parentDataset;

};

#endif /* SPDATABRIDGE_H_ */
