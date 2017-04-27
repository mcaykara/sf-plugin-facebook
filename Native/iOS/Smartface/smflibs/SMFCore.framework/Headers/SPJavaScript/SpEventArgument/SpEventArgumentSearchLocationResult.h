#ifndef __SpratIOS__SpEventArgumentSearchLocationResult__
#define __SpratIOS__SpEventArgumentSearchLocationResult__

#include <vector>
#include <string>

#include "SpEventArgument.h"

class SpEventArgumentSearchLocationResult : public SpEventArgument {
public:
	std::vector<double> lats;
	std::vector<double> lngs;
	std::vector<char*> names;
public:
	SpEventArgumentSearchLocationResult();
	~SpEventArgumentSearchLocationResult(); //TODO memory leak

	int GetPropertyType(const char* property);
	int GetResultCount(const char* property);
	SpJsValue GetResult(int index);
	void AddNewLocation(double lat,double lng,char* name);
    std::vector <std::string> GetPropertyNames(SpJsObject object);
};

#endif
