/*
 * SpBrNuiEditBoxView.h
 *
 *  Created on: 17 August 2011
 *      Author: Ali Can Keserel
 */

#ifndef SPBRNUIEDITBOXVIEW_H_
#define SPBRNUIEDITBOXVIEW_H_

#include "SpBrNuiBase.h"
#include "SpBrString.h"
#include "SpBrNuiTextView.h"

class SpBrNuiEditBoxView: public SpBrNuiBase {
private:
	bool firingOnChangeEvent;
public:
    static SpBrNuiEditBoxView* Create(SpBrBase* base, SpContext* context);
    static SpBrNuiEditBoxView* Create(SpBrNuiEditBoxView* objectToCopy);

    SpBrNuiEditBoxView(SpBrBase* base, SpContext* context);
    SpBrNuiEditBoxView(SpBrNuiEditBoxView* objectToCopy);
    virtual ~SpBrNuiEditBoxView();

    SpBrString* GetText();
    void SetText(SpBrString* newText, bool assignNativeText = true);
    virtual SpBrString* GetNativeText() = 0;
    virtual void SetNativeText(SpBrString* newText) = 0;
public:
	void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void Reset(bool invalidate = true);
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    void AssignDefaultValue(const char *attribute, const char *value);
    void NotifyControl(SpDataSet *dataset, unsigned int datasetChangeOptions);
    void NotifyFromCustomVariable(SpBrString *value);
    void FiringEventOnThis(int eventID, int eventCode = -1);

    bool HasMask();
    SpBrString* GetMask();
    void ClearNumberMask();
    void TextToMaskFormat(SpBrString *plainText);
    bool CheckMask(SpBrString* editBoxString, int cursorPosition, int &updatedCursorPosition);
    SpBrString* GetConstraintChars();
    TEditBoxTextType GetTextType();
    int GetMaxTextLength();
    int GetMinTextLength();
    int GetMaxValue();
    int GetMinValue();
    void SetMaxValue(int value);
    void SetMinValue(int value);
    int GetConstraintType();
    SpBrString* PlaceHolder();
    void CalculateIndexes();
    SpBrString* GetEditboxText();
    void SetEditboxText(SpBrString *newText);
    void NotifyControlPlaceHolder(SpDataSet *dataset, unsigned int datasetChangeOptions);
    virtual void UpdateNativePlaceHolder() = 0;
    virtual void CloseKeyboard() = 0;
    virtual void CheckRecreationNeed() {};
    virtual void UpdateFontColor(int color) {};
    virtual void UpdatePlaceHolderTextColor(int color) {};
    virtual void UpdateKeyboardType() {};
    virtual void UpdateReturnKeyType() {};
    virtual void UpdateKeyboardAppearance() {};
    virtual void UpdateIsPassword() {};

protected:
	SpBrString* editboxText;
    SpBrString* iEditboxText;
    SpBrString* iConstraintChars, *ConstraintChars;     // Actual "i" thing is ConstraintChars  //TODO
    SpBrString* iTextDisplayMask, *textDisplayMask;
    SpBrString* iDataText;
    SpBrString* iNonMaskedText;
    SpBrString *placeHolderStr, *iPlaceHolderStr;
    SpDataBridge *placeHolderDataBridge;

    TEditBoxInputType inputType;

    TEditBoxReturnKeyType returnKey, iReturnKey;
    int maxTextLength, iMaxTextLength;
    int minTextLength, iMinTextLength;
    int maxValue, iMaxValue;
    int minValue, iMinValue;
    int constraintType, iConstraintType;
    int minFontSize;
    bool multiline, iMultiline;
    bool autoLink;
    bool adjustFontSize;

public:
    TEditBoxTextType textType, iTextType;
    TEditBoxKeyboardType keyboardType, iKeyboardType;
    TReturnKeyType returnKeyType, iReturnKeyType;
    int keyboardAppearance, iKeyboardAppearance;

    bool enabledUpperCase,iEnabledUpperCase;
    bool passwordField;
    bool clearButton, iClearButton;
    int iActiveBorderColor, activeBorderColor;
    int placeHolderTextColor;
    bool editing;

    int decimalSeperatorIndex;
    int lastDiezIndex;
    bool decimalAddition;

//JS Stuff
public:
    bool IsMultiline();
    void SetMultiline(bool multiline);
    TEditBoxReturnKeyType GetReturnKeyType();
    void SetReturnKeyType(TEditBoxReturnKeyType returnKeyType);
    int GetMinimumFontSize();
    void SetMinimumFontSize(int fontSize);
    void SetConstraintChars(SpBrString* chars);
    SpBrString* GetTextDisplayMask();
    void SetTextType(TEditBoxTextType type);
    bool GetAdjustFontSize();
    void SetAdjustFontSize(bool adjust);
    void SetTextDisplayMaskFromJS(SpBrString* mask);
    void SetPlaceHolderStr(SpBrString* str);
    void SetMaxTextLength(int m);
    void SetMinTextLength(int m);
    void SetConstraintType(int t);
    void NotifyBindVariable(SpDataBridge* source,SpBrString* value);
    SpBrString* GetCurrencyText();

    virtual void SetUpperCase(bool value) = 0;
};


#endif /* SPBRNUIEDITBOXVIEW_H_ */
