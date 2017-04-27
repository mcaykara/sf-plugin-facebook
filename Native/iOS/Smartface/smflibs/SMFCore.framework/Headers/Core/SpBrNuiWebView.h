/*
 * SpBrNuiWebView.h
 *
 *  Created on: Jun 27, 2011
 *      Author: antti
 */

#ifndef SPBRNUIWEBVIEW_H_
#define SPBRNUIWEBVIEW_H_

#include "SpBrNuiBase.h"
#include "SpBrString.h"

class SpBrNuiWebView: public SpBrNuiBase {
public:
    static SpBrNuiWebView* Create(SpBrBase* base, SpContext* context);
    static SpBrNuiWebView* Create(SpBrNuiWebView* objectToCopy);

	SpBrNuiWebView(SpBrBase* base, SpContext* context);
    SpBrNuiWebView(SpBrNuiWebView *objectToCopy);
	virtual ~SpBrNuiWebView();
    SpBrString* GetURL();
    void SetURL(SpBrString* string);
    SpBrString* GetHTML();
    void SetHTML(SpBrString* htmlStr);
    virtual void SetNativeURL(SpBrString *url) {};
    virtual void SetNativeHTML(SpBrString *htmlFile) {};
	virtual void GoBack() {};
	virtual void GoForward() {};
	virtual void Refresh() {};
    virtual void RunJavascript(SpBrString* jsCode) {};

public:
    void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void Reset(bool invalidate = true);
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    void AssignDefaultValue(const char *attribute, const char *value);
    void NotifyControl(SpDataSet *dataset, unsigned int datasetChangeOptions);
    void NotifyFromCustomVariable(SpBrString *value);

public:
    SpBrString *iUrl, *url;
    SpBrString *iHtml, *html;
    SpBrString *jsRunResult;
    bool scalePageToFit, iScalePageToFit;

protected:
    SpBrString *resourceFileName;

    bool openLinksInside, iOpenLinksInside;
    bool showVerticalScrollbar, iShowVerticalScrollbar;
    bool showHorizontalScrollbar, iShowHorizontalScrollbar;

public:
    void NotifyBindVariable(SpDataBridge* source,SpBrString* value);
    bool GetScalePageToFit();
    void SetScalePageToFit(bool b);
    bool GetOpenLinksInside();
    void SetOpenLinksInside(bool b);
    bool GetShowVerticalScrollbar();
    virtual void SetShowVerticalScrollbar(bool b) = 0;
    bool GetShowHorizontalScrollbar();
    virtual void SetShowHorizontalScrollbar(bool b) = 0;
    virtual SpBrString* GetURL_JS();
    virtual SpBrString* GetHTML_JS();
};

#endif /* SPBRNUIWEBVIEW_H_ */
