#ifndef __SpratIOS__SpEventArgumentApplicationCall__
#define __SpratIOS__SpEventArgumentApplicationCall__

#include <vector>
#include <string>
#include "SpJsEngine/Core/SpJsEngine.h"

#include "SpEventArgument.h"

class SpEventArgumentApplicationCall : public SpEventArgument {
private:
	char *eventType;
public:
	SpEventArgumentApplicationCall();
	~SpEventArgumentApplicationCall();

	int GetPropertyType(const char* property);
	int GetIntProperty(const char* property);
	char* GetCharPtrProperty(const char* property,bool &deleteAfterUse);
	SpJsObject GetObjectProperty(const char* property);
    std::vector<std::string> GetPropertyNames(SpJsObject object);
};

#endif
