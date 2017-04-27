/*
 * SpBrFont.h
 *
 *  Created on: Jul 12, 2011
 *      Author: antti
 */

#ifndef SPBRFONT_H_
#define SPBRFONT_H_

#include "SpBrString.h"
#ifdef TARGET_PLATFORM_IOS
// TODO: To be implemented.
#endif
#ifdef TARGET_PLATFORM_ANDROID
#include <jni.h>
#endif

class SpBrFont {
	private:
        SpBrString* name;
		SpBrString* fontName;
		int size;
	public:
		SpBrFont(SpBrString* name, SpBrString* fontName, int size);
		virtual ~SpBrFont();
#ifdef TARGET_PLATFORM_IOS
		void* GetPlatformFont(SpContext* context) const;
#endif
#ifdef TARGET_PLATFORM_ANDROID
		jobject GetPlatformTypeface(SpContext* context) const;
#endif
};

#endif /* SPBRFONT_H_ */
