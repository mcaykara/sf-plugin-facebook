#ifndef __SpratIOS__SpEventArgumentCameraResult__
#define __SpratIOS__SpEventArgumentCameraResult__

#include <vector>
#include "SpEventArgument.h"
#include "SpJsEngine/Core/SpJsEngine.h"
#include <string>
#include <vector>

class SpEventArgumentCameraResult : public SpEventArgument {
private:
	char* photoUri;
public:
	SpEventArgumentCameraResult(char* photoUri);
	~SpEventArgumentCameraResult();

	int GetPropertyType(const char* property);
	char* GetCharPtrProperty(const char* property,bool &deleteAfterUse);
    std::vector<std::string> GetPropertyNames(SpJsObject object);
};

#endif
