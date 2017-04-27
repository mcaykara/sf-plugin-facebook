#ifndef __SpratIOS__SpEventArgumentSearchLocationResultArrayRow__
#define __SpratIOS__SpEventArgumentSearchLocationResultArrayRow__

#include <vector>
#include <string>

#include "SpEventArgumentSearchLocationResult.h"
#include "SpEventArgument.h"

class SpEventArgumentSearchLocationResultArrayRow : public SpEventArgument {
private:
	SpEventArgumentSearchLocationResult* parent;
	int index;
public:
	SpEventArgumentSearchLocationResultArrayRow(SpEventArgumentSearchLocationResult* parent,int index);
	~SpEventArgumentSearchLocationResultArrayRow();

	int GetPropertyType(const char* property);
	char* GetCharPtrProperty(const char* property,bool &deleteAfterUse);
	float GetFloatProperty(const char* property);
    std::vector <std::string> GetPropertyNames(SpJsObject object);
};

#endif
