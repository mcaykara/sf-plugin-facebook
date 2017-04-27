
//  SpratIOS
//
//  Created by mehmet akyol on 5/20/13.
//  Copyright (c) 2013 Smartface. All rights reserved.
//

#ifndef SpratIOS_SpEventArgumentContactPicked_h
#define SpratIOS_SpEventArgumentContactPicked_h

#include "SpJsEngine/Core/SpJsEngine.h"
#include "SpEventArgument.h"
#include <vector>
#include <string>

class SpDataSet;
class SpBrBase;

class SpEventArgumentContactPicked : public SpEventArgument {
private:
    SpDataSet* dataset;
public:
	SpEventArgumentContactPicked(SpBrBase* baseData);
	~SpEventArgumentContactPicked();

    int GetPropertyType(const char* property);
	char* GetCharPtrProperty(const char* property,bool &deleteAfterUse);
    std::vector<std::string> GetPropertyNames(SpJsObject object);
};



#endif
