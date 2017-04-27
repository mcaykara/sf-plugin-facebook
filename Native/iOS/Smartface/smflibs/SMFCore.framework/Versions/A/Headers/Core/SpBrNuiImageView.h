/*
 * SpBrNuiImageView.h
 *
 *  Created on: Jul 7, 2011
 *      Author: Timo
 */

#ifndef SPBRNUIIMAGEVIEW_H_
#define SPBRNUIIMAGEVIEW_H_

#include "SpBrNuiBase.h"
#include "SpJsEngine/Core/SpJsEngine.h"

#ifdef TARGET_PLATFORM_ANDROID
#include <jni.h>
#include <pthread.h>
#endif

class SpBrNuiImageView: public SpBrNuiBase {
public:
    static SpBrNuiImageView* Create(SpBrBase* base, SpContext* context);
    static SpBrNuiImageView* Create(SpBrNuiImageView* objectToCopy);

	SpBrNuiImageView(SpBrBase* base, SpContext* context);
	SpBrNuiImageView(SpBrNuiImageView* objectToCopy);
	virtual ~SpBrNuiImageView();
	SpBrString* GetImage();
	SpBrString* GetImageNewString();
	void SetImage(SpBrString *value, bool fromNetwork = false);
    virtual void SetNativeImage(SpBrString* value, bool fromNetwork = false,bool force=true) = 0;
    virtual void SetEnableScroll(bool value) = 0;
    virtual void SetEnableZoom(bool value) = 0;
    virtual void NullImage() {
        isMainPropertyEverSet = false;
    };
private:
    SpBrString *iPicture, *picture;
    SpBrString *picturePath;
    SpJsValue jsImageProperty;
    bool cacheEnabled,iCacheEnabled;
    bool overrideCache, iOverrideCache;
public:
	void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    void AssignDefaultValue(const char *attribute, const char *value);
    void Reset(bool invalidate = true);
    void DisplayFinishedTempFiles();
    void NotifyControl(SpDataSet *dataset, unsigned int datasetChangeOptions);
    void NotifyFromCustomVariable(SpBrString *value);

    SpJsValue getProtectedValueRef();
    void setProtectedValueRef(SpJsValue value);

    virtual void UpdateMinMaxZoomLevels() = 0;
    virtual void SetZoomLevel() = 0;
    virtual int GetActualHeight() = 0;
    virtual int GetActualWidth() = 0;
    bool IsCacheEnabled();
    void SetCacheEnabled(bool cacheEnabled);
    void setOverrideCache(bool overrideCache);
    bool IsOverrideCacheEnabled();

public:
    void NotifyBindVariable(SpDataBridge* source,SpBrString* value);

public:
    SpBrString *repeatBoxChildLatestSetImage;
    bool downloadInProgress;
    bool enableZoom,iEnableZoom;
    bool enableScroll,iEnableScoll;
    double minZoomLevel, maxZoomLevel;
    double iMinZoomLevel, iMaxZoomLevel;
    double zoomLevel, iZoomLevel;
    TImageSwitchAnimation changeAnimation , iChangeAnimation;
    SpBrString* originalSource;

    pthread_mutex_t lock;
    pthread_t thread;

};

#endif /* SPBRNUIIMAGEVIEW_H_ */
