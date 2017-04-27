#include "SpJsEngine/Core/SpJsEngine.h"
//
//  SpJSFunctionCanvas.h
//  SpratIOS
//
//  Created by mehmet akyol on 1/2/14.
//  Copyright (c) 2014 Bivium. All rights reserved.
//

#ifndef __SpratIOS__SpJSFunctionCanvas__
#define __SpratIOS__SpJSFunctionCanvas__


SpJsFunction (cb_canvas_drawline);

SpJsFunction (cb_canvas_drawRect);

SpJsFunction (cb_canvas_drawRoundRect);

SpJsFunction (cb_canvas_drawCircle);

SpJsFunction (cb_canvas_drawArc);

SpJsFunction (cb_canvas_drawText);

SpJsFunction (cb_canvas_drawPolygon);

SpJsFunction (cb_canvas_redraw);

SpJsFunction (cb_canvas_drawImage);

void* getPaintData(int type, SpJsObject objRef, SpBrNuiBase *base = NULL);

#endif /* defined(__SpratIOS__SpJSFunctionCanvas__) */
