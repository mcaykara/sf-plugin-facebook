/*
 * SpBrNuiWebViewAndroid.h
 *
 *  Created on: Jun 27, 2011
 *      Author: antti
 */

#ifndef SPBRNUIWEBVIEWANDROID_H_
#define SPBRNUIWEBVIEWANDROID_H_

#include "Core/SpBrNuiWebView.h"

class SpBrNuiWebViewAndroid: public SpBrNuiWebView {
private:
public:
	SpBrNuiWebViewAndroid(SpBrBase* base, SpContext* context);
	SpBrNuiWebViewAndroid(SpBrNuiWebViewAndroid* objectToCopy);
	virtual ~SpBrNuiWebViewAndroid();
	void Load();
    void Invalidate(bool skipMainProperty = false);
    void SetURLFromCallback(SpBrString *url);
    void SetNativeURL(SpBrString *url);
    void SetNativeHTML(SpBrString *htmlFile);
	void GoBack();
	void GoForward();
	void Refresh();
	void RunJavascript(SpBrString* jsCode);
	void SetShowVerticalScrollbar(bool b);
	void SetShowHorizontalScrollbar(bool b);
	void SetAlpha();

private:
	SpBrString *urlFromCallBack;
	void RefreshScrollbars();
};

#endif /* SPBRNUIWEBVIEWANDROID_H_ */
