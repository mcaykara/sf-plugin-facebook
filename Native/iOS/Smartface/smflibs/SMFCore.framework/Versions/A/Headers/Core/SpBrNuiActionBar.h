#include "SpBrString.h"
//#include "SpBrNuiActionTitleView.h"
#include "SpDefs.h"
#include <vector>
#include "SPJavaScript/SpJSFontData.h"
#include "SpJsEngine/Core/SpJsEngine.h"

class SpBrNuiPageAndroid;
class SpBrNuiActionMenuItem;
class SpBrNuiActionTitleView;
class SpBrNuiActionBar{
private:
	int backgroundColor;
	SpBrString * backgroundImage;
	SpBrString *icon;
	SpBrString *title;
	SpBrString *logo;
	SpBrString *subtitle;
	SpBrString* backIcon;
	int height;
	bool displayHomeAsUpEnabled;
	bool displayShowTitleEnabled;
	bool displayShowHomeEnabled;
	int visible;
	float itemTextSize;
	int itemTextColor;
	bool textColorChanged;
	bool textSizeChanged;
	SpJsObject jsObjectRef;
	bool overlay;
	float alpha;
	bool hideOnContentScroll;
	bool enabled;
public:
	SpBrNuiActionBar(SpBrNuiPageAndroid *boundedPage);
	~SpBrNuiActionBar();
	int GetBackgroundColor() const;
	void SetBackgroundColor(int backgroundColor);
	const SpBrString* GetBackgroundImage() const;
	void SetBackgroundImage(SpBrString* backgroundImage);
	bool isDisplayHomeAsUpEnabled() const;
	void SetDisplayHomeAsUpEnabled(bool displayHomeAsUpEnabled);
	bool isDisplayShowTitleEnabled() const;
	void SetDisplayShowTitleEnabled(bool displayShowTitleEnabled);
	bool IsDisplayShowHomeEnabled() const;
	void SetDisplayShowHomeEnabled(bool displayShowHomeEnabled);
	int GetHeight();
	void SetHeight(int height);
	const SpBrString* GetIcon() const;
	void SetIcon(SpBrString* icon);
	const SpBrString* GetLogo() const;
	void SetLogo(SpBrString* logo);
	const SpBrString* GetSubtitle() const;
	void SetSubtitle(SpBrString* subtitle);
	const SpBrString* GetTitle() const;
	void SetTitle(SpBrString* title);
	int GetVisible() const;
	void SetVisible(int visible);
	void SetNativeRef();
	void SetNativeMenuItems();
	int GetItemTextColor() const;
	void SetItemTextColor(int itemTextColor);
	float GetItemTextSize() const;
	void SetItemTextSize(float itemTextSize);
	void SetNativeTitleView();
	void SetItemFont();
	bool GetOverlay();
	void SetOverlay(bool overlay);
    float GetAlpha();
    void SetAlpha(float alpha);
    void SetHideOnContentScroll(bool hideOnContentScroll);
    bool GetHideOnContentScroll();
	const SpBrString* GetBackIcon() const;
	void SetBackIcon(SpBrString* backIconPath);
	void SetEnabled(bool enabled);
	bool GetEnabled();
public:
	void AttachToAPage(SpBrNuiPageAndroid *pageToAttachTo);
	void Invalidate();
	void FireOnHomeIconSelectedEvent();

public:
	SpBrNuiActionTitleView *titleView;
	SpBrNuiPageAndroid *parentPage;
	std::vector<SpBrNuiActionMenuItem*> menuItems;
	SpJsObject onHomeIconItemSelectedEvent;
	SpJSFontData *itemFontData;
	TFontStyle itemFontStyle;
public:
	void CreateJSObject(bool protect = true);
	void SetJSObjectRef(SpJsObject objRef);
	void UnloadJSObjectRef();
	SpJsObject GetJSObjectRef();

};
