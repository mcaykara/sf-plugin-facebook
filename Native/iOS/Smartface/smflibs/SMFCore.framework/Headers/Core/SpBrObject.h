/*
 * SpBrObject.h
 *
 *  Created on: 20 Mar 2014
 *      Author: ugur
 */

#ifndef SPBROBJECT_H_
#define SPBROBJECT_H_

#include <vector>
#include "SpDefs.h"
#include <pthread.h>

#ifdef TARGET_PLATFORM_ANDROID
#include <jni.h>
#endif

#include "SpJsEngine/Core/SpJsEngine.h"


class SpBrBase;
class SpContext;

class SpBrObject {
public:

    SpBrObject();
    SpBrObject(SpBrBase* base, SpContext* context);
    SpBrObject(SpBrObject *objectToCopy);

public:
    bool IsViewObject();
    void SetObjectDefaultProperties(size_t argumentCount, const SpJsValue arguments[]);

    void CreateSMFJSObjectIfNeeded(SpJsValue valueRef, const char* classFullName);
    
    virtual void AssignInitialValue(char **attribute, SpJsValue valueRef);
    virtual void AssignDefaultValue(const char *attribute, const char *value) {};
    virtual void DynamicObjectCreated(){};

    virtual SpJsObject GetJSObjectRef() = 0;
    
public:
    SpBrBase *baseData;
    SpJsObject jsObjectRef;

    bool isPluginObject;
    bool isViewObject;

#ifdef TARGET_PLATFORM_IOS
    void* objCObject;
#elif defined TARGET_PLATFORM_ANDROID
    jobject objectRef;
#endif

};


#endif /* SPBROBJECT_H_ */
