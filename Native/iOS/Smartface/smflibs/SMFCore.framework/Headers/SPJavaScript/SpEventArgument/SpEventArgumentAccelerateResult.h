#ifndef __SpratIOS__SpEventArgumentAccelerateResult__
#define __SpratIOS__SpEventArgumentAccelerateResult__

#include <vector>
#include <string>

#include "SpEventArgument.h"

class SpEventArgumentAccelerateResult : public SpEventArgument {
private:
	int x;
	int y;
	int z;
public:
	SpEventArgumentAccelerateResult(int,int,int);
	~SpEventArgumentAccelerateResult();

	int GetPropertyType(const char* property);
	int GetIntProperty(const char* property);
    std::vector<std::string> GetPropertyNames(SpJsObject object);
};

#endif
