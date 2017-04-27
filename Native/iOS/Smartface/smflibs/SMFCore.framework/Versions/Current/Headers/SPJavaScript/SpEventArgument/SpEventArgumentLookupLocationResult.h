
#ifndef __SpratIOS__SpEventArgumentLookupLocationResult__
#define __SpratIOS__SpEventArgumentLookupLocationResult__

#include <vector>
#include <string>
#include "SpEventArgument.h"

class SpEventArgumentLookupLocationResult : public SpEventArgument {
public:
	std::vector<double> lats;
	std::vector<double> lngs;
public:
	SpEventArgumentLookupLocationResult();
	~SpEventArgumentLookupLocationResult();

	int GetPropertyType(const char* property);
	int GetResultCount(const char* property);
	SpJsValue GetResult(int index);
	void AddNewLocation(float lat,float lng);
    std::vector <std::string> GetPropertyNames(SpJsObject object);
};

#endif
