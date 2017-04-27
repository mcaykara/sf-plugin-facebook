//
//  SpEventArgumentGesture.h
//  SpratIOS
//
//  Created by mehmet akyol on 10/22/13.
//  Copyright (c) 2013 Smartface. All rights reserved.
//

#ifndef __SpratIOS__SpEventArgumentGesture__
#define __SpratIOS__SpEventArgumentGesture__

#include <vector>
#include <string>

#include "SpEventArgument.h"
#include "Core/SpBrString.h"

class SpEventArgumentGesture : public SpEventArgument {
private:
	SpBrString* gestureIdentifier;
public:
	SpEventArgumentGesture(SpBrString *identifier);
	~SpEventArgumentGesture();

    int GetPropertyType(const char* property);

	char* GetCharPtrProperty(const char* property,bool &deleteAfterUse);
    std::vector<std::string> GetPropertyNames(SpJsObject object);
};




#endif /* defined(__SpratIOS__SpEventArgumentGesture__) */
