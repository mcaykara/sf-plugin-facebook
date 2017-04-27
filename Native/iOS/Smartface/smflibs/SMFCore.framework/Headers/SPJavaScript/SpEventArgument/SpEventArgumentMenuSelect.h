#ifndef __SpratIOS__SpEventArgumentMenuSelect__
#define __SpratIOS__SpEventArgumentMenuSelect__

#include "SpEventArgument.h"

#include <vector>
#include <string>

class SpBrNuiMenu;

class SpEventArgumentMenuSelect : public SpEventArgument {
private:
	int index;
	SpBrNuiMenu* menu;
public:
	SpEventArgumentMenuSelect(SpBrNuiMenu* ,int);
	~SpEventArgumentMenuSelect();

	int GetPropertyType(const char* property);
	int GetIntProperty(const char* property);
	char* GetCharPtrProperty(const char* property,bool &deleteAfterUse);
    std::vector<std::string> GetPropertyNames(SpJsObject object);


};

#endif
