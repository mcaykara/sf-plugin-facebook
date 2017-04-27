
#ifndef SPBRNUIRECTANGLEANDROID_H_
#define SPBRNUIRECTANGLEANDROID_H_

#include "Core/SpBrNuiRectangle.h"

#ifdef TARGET_PLATFORM_ANDROID

class SpBrNuiRectangleAndroid: public SpBrNuiRectangle {
public:
	SpBrNuiRectangleAndroid(SpBrBase* base, SpContext* context);
    SpBrNuiRectangleAndroid(SpBrNuiRectangleAndroid* objectToCopy);
	virtual ~SpBrNuiRectangleAndroid();
	void Load();
    void Invalidate(bool skipMainProperty = false);
private:
};

#endif

#endif /* SPBRNUIRECTANGLEANDROID_H */
