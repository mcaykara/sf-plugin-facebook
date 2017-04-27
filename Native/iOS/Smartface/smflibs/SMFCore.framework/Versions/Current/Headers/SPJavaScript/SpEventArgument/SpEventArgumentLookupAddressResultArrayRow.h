
#ifndef __SpratIOS__SpEventArgumentLookupAddressResultArrayRow__
#define __SpratIOS__SpEventArgumentLookupAddressResultArrayRow__

#include <vector>
#include <string>

#include "SpEventArgumentLookupAddressResult.h"

class SpEventArgumentLookupAddressResultArrayRow : public SpEventArgument {
private:
	SpEventArgumentLookupAddressResult* parent;
	int index;
public:
	SpEventArgumentLookupAddressResultArrayRow(SpEventArgumentLookupAddressResult* parent,int index);
	~SpEventArgumentLookupAddressResultArrayRow();

	int GetPropertyType(const char* property);
	char* GetCharPtrProperty(const char* property,bool &deleteAfterUse);
    std::vector <std::string> GetPropertyNames(SpJsObject object);
};

#endif
