//
//  SpEventArgumentRunJS.h
//  SpratIOS
//
//  Created by mehmet akyol on 10/31/13.
//  Copyright (c) 2013 Smartface. All rights reserved.
//

#ifndef __SpratIOS__SpEventArgumentRunJS__
#define __SpratIOS__SpEventArgumentRunJS__

#include <vector>
#include <string>

#include "SpEventArgument.h"

class SpEventArgumentRunJS : public SpEventArgument {
private:
    char *result;
public:
	SpEventArgumentRunJS(char *retVal);
	SpEventArgumentRunJS();

    int GetPropertyType(const char* property);
	char* GetCharPtrProperty(const char* property,bool &deleteAfterUse);
    std::vector<std::string> GetPropertyNames(SpJsObject object);
};

#endif /* defined(__SpratIOS__SpEventArgumentRunJS__) */
