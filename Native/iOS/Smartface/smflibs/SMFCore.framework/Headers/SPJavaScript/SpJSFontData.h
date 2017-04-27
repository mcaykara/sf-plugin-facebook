//
//  SpJSFontData.h
//  SpratIOS
//
//  Created by adem on 07.03.2013
//

#ifndef SpratIOS_SpJSFontData_h
#define SpratIOS_SpJSFontData_h

#include "Core/SpBrNuiBase.h"
#include "SpJSFont.h"

#include "SpJsEngine/Core/SpJsEngine.h"

struct SpJSFontData
{
    SpJsObject fontObject;
	SpBrNuiBase* view;
	SpBrBase* base;
	bool bold;
	bool italic;
	bool underline;
	int fontSize;
	char* fontName;
    char *fontFamily;
    GeometryValueTypes valueType;
	SpJSFontData(SpBrBase* b)
	{
        fontObject = SpJsNullObject;
		base = b;
		view = NULL;
		fontName = strdup("Default");
        fontFamily = NULL;
		bold = false;
		italic = false;
		underline = false;
		fontSize =(int)( (float)(10* base->deviceDpi) / (float)72 );
        valueType = GVTPixel;
	}
	SpJSFontData(SpBrNuiBase* v)
	{
        fontObject = SpJsNullObject;
		view = v;
		base = v->baseData;
		fontName = strdup("Default");
        fontFamily = NULL;
		bold = false;
		italic = false;
		underline = false;
		fontSize =(int)( (float)(10* base->deviceDpi) / (float)72 );
        valueType = GVTPixel;
	}
    SpJSFontData(const SpJSFontData &v)
	{
        view = v.view;
        base = v.base;

        fontObject = SpJsNewInstance (&smffont_def, (void*)this);
        // since this is connected to a view object, we protect it
        SpJsProtect (fontObject);

        fontName = v.fontName ? strdup(v.fontName) : NULL;
        fontFamily = v.fontFamily ? strdup(v.fontFamily) : NULL;
        bold = v.bold;
        italic = v.italic;
        underline = v.underline;
        fontSize = v.fontSize;
        valueType = v.valueType;
	}
	~SpJSFontData()
	{
		if (fontName) delete[] fontName;
        if (fontFamily) delete[] fontFamily;
	}
};

#endif
