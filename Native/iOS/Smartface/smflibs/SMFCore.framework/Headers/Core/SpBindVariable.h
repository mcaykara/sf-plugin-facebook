/*
 * SpBindVariable.h
 *
 *  Created on: 2 Jan 2013
 */

#ifndef SPBINDVARIABLE_H_
#define SPBINDVARIABLE_H_

#include <vector>
#include "SpDefs.h"
#include "SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

class SpBrNuiBase;
class SpBrString;
class SpApplication;
class SpBrParcelable;
class SpDataBridge;
class SpBrBase;


class SpBindVariable {
public:
	SpBindVariable(SpApplication *app,SpBrString* name,BVTypes type );
	virtual ~SpBindVariable();
	SpBrString* Get(SpJsObject thisObject = SpJsNullObject);
    void AppendObject(SpBrParcelable *object,SpDataBridge *ds);
    void NotifyObjects(SpBrParcelable *except=NULL);
    void NotifySplashObject(SpBrBase* baseData);
    void SetName(SpBrString *newName);
private:
    std::vector<SpBrParcelable*> boundedObjects;
    std::vector<SpDataBridge*> boundedObjectsDataBridges;
    SpBrString *name;
    SpApplication *application;

public:
    BVTypes type;
    bool nameNormalized;
};

#endif /* SPCUSTOMVARIABLE_H_ */
