
#ifndef __SPHTTPRESPONSE_H__
#define __SPHTTPRESPONSE_H__

#include "SpDataSource.h"
#include <string>
#include <vector>

class SpHttpResponse
{
private:
	SpDataSource* datasource;
	std::vector<std::string> headers;
public:
	SpHttpResponse();
	virtual ~SpHttpResponse();
	SpDataSource* GetDataSource();
	int GetHeaderSize();
	std::string GetHeader(int position);
	void PushHeader(const char* header);
	void SetDataSource(SpDataSource* datasource);
};

#endif
