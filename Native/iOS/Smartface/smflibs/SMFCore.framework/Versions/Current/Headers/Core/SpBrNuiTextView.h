/*
 * SpBrNuiTextView.h
 *
 *  Created on: Jun 22, 2011
 *      Author: umit
 */

#ifndef SPBRNUITEXTVIEW_H_
#define SPBRNUITEXTVIEW_H_

#include "SpBrNuiBase.h"
#include "SpBrString.h"

class SpBrNuiTextView: public SpBrNuiBase {
public:
    static SpBrNuiTextView* Create(SpBrBase* base, SpContext* context);
    static SpBrNuiTextView* Create(SpBrNuiTextView* objectToCopy);

	SpBrNuiTextView(SpBrBase* base, SpContext* context);
	SpBrNuiTextView(SpBrNuiTextView* objectToCopy);
	virtual ~SpBrNuiTextView();
    SpBrString* GetText();
	void SetText(SpBrString* string);
    virtual void SetNativeText(SpBrString* newText) = 0;
    virtual SpUtSize GetTextSize() = 0;
    virtual void enableScrollBar(bool value) = 0;
    virtual void enableMultiline(bool value) = 0;

public:
	void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void Reset(bool invalidate = true);
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    void AssignDefaultValue(const char *attribute, const char *value);
    void NotifyControl(SpDataSet *dataset, unsigned int datasetChangeOptions);
    void NotifyFromCustomVariable(SpBrString *value);
    void NotifyBindVariable(SpDataBridge* source,SpBrString* value);
    bool HasMask();
    void TextToMaskFormat(SpBrString *plainText);
    void CalculateIndexes();
    virtual void updateFontColor() {};

    bool IsShowScroll();
    bool IsMultiline();
    bool IsAutoLink();
    bool IsAdjustFontSize();

public:
	enum TLabelTextType { LTTCurrency, LTTDateTime, LTTGeneric, LTTPassword, LTTPhoneNumber, LTTNumber, LTTNumericPassword };
    int widthConstantForAutosize;
    bool adjustRectToFitText, iAdjustRectToFitText;
    bool lastSetIsText, iLastSetIsText;

protected:
    SpBrString* labelText, *iLabelText;
    SpBrString* attributedText, *iAttributedText;
    SpBrString* textDisplayMask;
	TLabelTextType textType;

	bool multiline, iMultiline;
    bool showScroll, iShowScroll;
    bool autoLink, iAutoLink;
    bool adjustFontSize, iAdjustFontSize;
    int minFontSize, iMinFontSize;
    int decimalSeperatorIndex, iDecimalSeperatorIndex;

public:
    virtual void SetAdjustFontSize(bool adjust);
    int GetMinimumFontSize();
    virtual void SetMinimumFontSize(int fontSize) = 0;
    SpBrString* GetTextDisplayMask();
    TLabelTextType GetTextType();
    void SetTextType(TLabelTextType type);
    void SetTextDisplayMaskFromJS(SpBrString* mask);
    void SetAutoLink(bool autolink);
    void SetMultiline(bool multiline);
    void SetShowScroll(bool showScroll);
};

#endif /* SPBRNUITEXTVIEW_H_ */
