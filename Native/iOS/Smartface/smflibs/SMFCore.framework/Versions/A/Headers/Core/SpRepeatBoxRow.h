#ifndef SPREPEATBOXROW_H
#define SPREPEATBOXROW_H


#include <vector>
#include "SpBrNuiBase.h"

class SpRepeatBoxRow{
public:
	SpRepeatBoxRow(int requestedIndex);
    virtual ~SpRepeatBoxRow();
public:
    int rowIndex;
    std::vector<SpBrNuiBase*> items;
};

#endif
