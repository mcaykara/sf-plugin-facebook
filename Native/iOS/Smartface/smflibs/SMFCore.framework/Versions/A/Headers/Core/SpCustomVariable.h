/*
 * SpCustomVariable.h
 *
 *  Created on: 4 Jan 2012
 *      Author: ugurkilic
 */

#ifndef SPCUSTOMVARIABLE_H_
#define SPCUSTOMVARIABLE_H_

#include <cstddef>
#include <vector>
#include <stddef.h>

class SpBrNuiBase;
class SpBrString;
class SpApplication;

class SpCustomVariable {
public:
	SpCustomVariable(SpApplication *app);
	virtual ~SpCustomVariable();

    void FormCustomVariable(SpBrString* name, SpBrString* value, int secure);
    SpBrString* GetValue();

    void UpdateValue(SpBrString* value, int secure);
    void CreateCustomVariable(SpBrString* name, SpBrString* value, int secure);

    void RunUpdate(SpBrString* encryptedVal = NULL);
    void RunInsert(SpBrString* encryptedVal = NULL);

    void AppendObject(SpBrNuiBase *object);
    void NotifyObjects();

private:
    std::vector<SpBrNuiBase *> boundedObjects;
    SpBrString *varName;
    SpBrString *varValue;
    bool isSecure;
    SpApplication *application;
};

#endif /* SPCUSTOMVARIABLE_H_ */
