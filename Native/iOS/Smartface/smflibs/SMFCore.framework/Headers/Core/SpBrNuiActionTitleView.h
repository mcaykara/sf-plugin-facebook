#include "SpBrString.h"
#include "SPJavaScript/SpJSFontData.h"


class SpBrNuiActionTitleView {
private:
	int type;
	SpBrString *image;
	SpBrString *text;
	float textSize;
	int textColor;
	int alignment;
	int left;
	int top;

public:
	SpJSFontData *fontData;
	TFontStyle fontStyle;

public:
	SpBrNuiActionTitleView();
	~SpBrNuiActionTitleView();

	int GetAlignment() const;
	void SetAlignment(int alignment);
	SpBrString* GetImage() const;
	void SetImage(SpBrString* image);
	int GetLeft() const;
	void SetLeft(int left);
	SpBrString* GetText() const;
	void SetText(SpBrString* text);
	int GetTextColor() const;
	void SetTextColor(int textColor);
	float GetTextSize() const;
	void SetTextSize(float textSize);
	int GetTop() const;
	void SetTop(int top);
	int GetType() const;
	void SetType(int type);
};
