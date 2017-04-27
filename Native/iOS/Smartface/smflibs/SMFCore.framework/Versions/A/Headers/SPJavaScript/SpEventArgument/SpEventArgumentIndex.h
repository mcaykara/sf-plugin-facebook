#ifndef __SpratIOS__SpEventArgumentIndex__
#define __SpratIOS__SpEventArgumentIndex__

#include "SpEventArgument.h"

#include <vector>
#include <string>

class SpEventArgumentIndex : public SpEventArgument {
private:
	int index;
public:
	SpEventArgumentIndex(int index);
	~SpEventArgumentIndex();

	int GetPropertyType(const char* property);
	int GetIntProperty(const char* property);
    std::vector<std::string> GetPropertyNames(SpJsObject object);
};

#endif
