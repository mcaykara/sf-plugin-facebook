#ifndef __SpratIOS__SpEventArgumentKeyEvent__
#define __SpratIOS__SpEventArgumentKeyEvent__

#include "SpEventArgument.h"

#include <vector>
#include <string>

class SpEventArgumentKeyEvent : public SpEventArgument {
private:
	int keyCode;
public:
	SpEventArgumentKeyEvent(int keyCode);
	~SpEventArgumentKeyEvent();

	int GetPropertyType(const char* property);
	int GetIntProperty(const char* property);
    std::vector<std::string> GetPropertyNames(SpJsObject object);
};

#endif
