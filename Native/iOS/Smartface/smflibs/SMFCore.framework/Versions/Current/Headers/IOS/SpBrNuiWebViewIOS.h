/*
 * SpBrNuiWebViewIOS.h
 *
 *  Created on: Jul 6, 2011
 *      Author: antti
 */

#ifndef SPBRNUIWEBVIEWIOS_H_
#define SPBRNUIWEBVIEWIOS_H_

#include "Core/SpBrNuiWebView.h"

class SpBrNuiWebViewIOS: public SpBrNuiWebView {
public:
	SpBrNuiWebViewIOS(SpBrBase* base, SpContext* context);
    SpBrNuiWebViewIOS(SpBrNuiWebViewIOS *objectToCopy);
	virtual ~SpBrNuiWebViewIOS();

	void Load();
    void Invalidate(bool skipMainProperty = false);
	void LoadURL(SpBrString* URL);
    void LoadHTML(SpBrString* resourcePath);
    void SetNativeURL(SpBrString *url);
    void SetNativeHTML(SpBrString *htmlFile);
	void GoBack();
	void GoForward();
	void Refresh();
    void RunJavascript(SpBrString* jsCode);
    void SetShowVerticalScrollbar(bool b);
    void SetShowHorizontalScrollbar(bool b);
    
    virtual SpBrString* GetHTML_JS();
public:
    void *webViewReporter;
};

#endif /* SPBRNUIWEBVIEWIOS_H_ */
