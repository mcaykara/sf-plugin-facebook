
#ifndef __SpratIOS__SpEventArgumentLookupAddressResult__
#define __SpratIOS__SpEventArgumentLookupAddressResult__

#include "SpEventArgument.h"
#include <string>
#include <vector>

class SpEventArgumentLookupAddressResult : public SpEventArgument {
public:
	std::vector<char*> addressTypes;
	std::vector<char*> addressValues;
public:
	SpEventArgumentLookupAddressResult();
	~SpEventArgumentLookupAddressResult(); // TODO memory leak

	int GetPropertyType(const char* property);
	int GetResultCount(const char* property);
	SpJsValue GetResult(int index);
	void AddNewAddress(char* type,char* value);
    std::vector <std::string> GetPropertyNames(SpJsObject object);
};

#endif
