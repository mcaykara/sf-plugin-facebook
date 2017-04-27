#ifndef __SpratIOS__SpEventArgumentPosition__
#define __SpratIOS__SpEventArgumentPosition__

#include "SpEventArgument.h"
#include <vector>
#include <string>

class SpEventArgumentPosition : public SpEventArgument {
private:
	int x;
	int y;
public:
	SpEventArgumentPosition(int x,int y);
	~SpEventArgumentPosition();

	int GetPropertyType(const char* property);
	int GetIntProperty(const char* property);
    std::vector<std::string> GetPropertyNames(SpJsObject object);
};

#endif
