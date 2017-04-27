/*
 * SpBrNuiButtonView.h
 *
 *  Created on: Jul 19, 2011
 *      Author: timo
 */

#ifndef SPBRNUIBUTTONVIEW_H_
#define SPBRNUIBUTTONVIEW_H_

#ifdef TARGET_PLATFORM_ANDROID
#include <jni.h>
#include <pthread.h>
#endif

#include "SpBrNuiBase.h"
#include "SpBrString.h"

class SpDataSet;

class SpBrNuiButtonView: public SpBrNuiBase {
public:
    typedef enum {
        BTImage = 0,
        BTText3D = 1,
        BTText = 2,
    } TButtonType;

    TButtonType buttonType, iButtonType;
public:
    static SpBrNuiButtonView* Create(SpBrBase* base, SpContext* context);
    static SpBrNuiButtonView* Create(SpBrNuiButtonView* objectToCopy);

	SpBrNuiButtonView(SpBrBase* base, SpContext* context);
    SpBrNuiButtonView(SpBrNuiButtonView* objectToCopy);
	virtual ~SpBrNuiButtonView();

	SpBrString* GetText();
	void SetText(SpBrString* string);
    void SetImage(SpBrString *value,bool fromNetwork =false);
    virtual void SetNativeText(SpBrString* newText) = 0;
    virtual void SetNativeImage(SpBrString *value,bool fromNetwork =false) = 0;
    virtual void changeEnabledAndroid(){};

    void DownloadImage();
    void DownloadFinished();

    virtual void SetDisabledFontColor() = 0;

public:
	void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
	void Reset(bool invalidate = true);
	void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    void AssignDefaultValue(const char *attribute, const char *value);
    void NotifyControl(SpDataSet *dataset, unsigned int datasetChange);
    void NotifyFromCustomVariable(SpBrString *value);

    bool IsImageButton();
    void SetButtonType(TButtonType type);
    TButtonType GetButtonType();
public:
    SpBrString *buttonText, *iButtonText;
    SpBrString *iNormalImage, *iActiveImage, *iPressedImage, *iDisabledImage;
    SpBrString *normalImage, *activeImage, *pressedImage, *disabledImage;
    SpBrString *normalImagePath, *activeImagePath, *pressedImagePath, *disabledImagePath;

    int iPressedFColor, pressedFColor;
    // TODO android and ios must be implement this variable
    int iDisabledFColor, disabledFColor;
    int iPressedBackgroundColor, pressedBackgroundColor;

    pthread_mutex_t lock;
    pthread_t thread;
    void NotifyBindVariable(SpDataBridge* source,SpBrString* value);
};

#endif /* SPBRNUIBUTTONVIEW_H_ */
