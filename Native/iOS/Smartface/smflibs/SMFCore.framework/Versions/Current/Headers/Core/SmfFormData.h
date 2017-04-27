//
//  SmfFormData.h
//  Smartface
//
//  Created by Ugur Kilic on 08/12/2014.
//

#ifndef __SMF_FORMDATA__
#define __SMF_FORMDATA__

#include <string>
#include <map>

#include "SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

class SmfFormData {
public:
    SmfFormData();
    SmfFormData(const SmfFormData* obj);
    ~SmfFormData();

public:
    void AppendFormObject(std::string key, SpJsObject value);
    void AppendOptionalFilename(std::string key, std::string filename);

public:
    std::map<std::string, SpJsObject> parameters;
    std::map<std::string, std::string> filenames;
};

#endif /* __SMF_FORMDATA__ */
