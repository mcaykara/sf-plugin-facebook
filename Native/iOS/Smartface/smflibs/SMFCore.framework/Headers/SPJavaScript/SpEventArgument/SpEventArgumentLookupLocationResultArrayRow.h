#ifndef __SpratIOS__SpEventArgumentLookupLocationResultArrayRow__
#define __SpratIOS__SpEventArgumentLookupLocationResultArrayRow__

#include <vector>
#include <string>

#include "SpEventArgumentLookupLocationResult.h"
#include "SpEventArgument.h"

class SpEventArgumentLookupLocationResultArrayRow : public SpEventArgument {
private:
	SpEventArgumentLookupLocationResult* parent;
	int index;
public:
	SpEventArgumentLookupLocationResultArrayRow(SpEventArgumentLookupLocationResult* parent,int index);
	~SpEventArgumentLookupLocationResultArrayRow();

	int GetPropertyType(const char* property);
	float GetFloatProperty(const char* property);
    std::vector <std::string> GetPropertyNames(SpJsObject object);
};

#endif
