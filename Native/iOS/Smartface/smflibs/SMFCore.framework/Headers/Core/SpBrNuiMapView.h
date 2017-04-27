/*
 * SpBrNuiMapView.h
 *
 *  Created on: Jun 27, 2011
 *      Author: antti
 */

#ifndef SPBRNUIMAPVIEW_H_
#define SPBRNUIMAPVIEW_H_

#include "SpBrNuiBase.h"
#include "SpUtLocation.h"
#include "SpMapViewPin.h"

#define MAP_TYPE_STANDARD 0
#define MAP_TYPE_SATELLITE 1
#define MAP_TYPE_HYBRID 2

class SpBrNuiMapView: public SpBrNuiBase {
public:
    static SpBrNuiMapView* Create(SpBrBase* base, SpContext* context);
    static SpBrNuiMapView* Create(SpBrNuiMapView* objectToCopy);

	SpBrNuiMapView(SpBrBase* base, SpContext* context);
    SpBrNuiMapView(SpBrNuiMapView* objectToCopy);
	virtual ~SpBrNuiMapView();
    void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    void AssignDefaultValue(const char *attribute, const char *value);
    void Reset(bool invalidate = true);
    void SetShowPins(bool show);
	virtual void setFocusLocation(){};
    void FillLocationArrayFromPolyline(std::vector<SpUtLocation*>& locArray, SpBrString *polyString);
    virtual void SetScrollEnabled(bool value) = 0;
    virtual void SetZoomEnabled(bool value) = 0;
    virtual void SetCenterLatitude(double latitude) = 0;
    virtual void SetCenterLongitude(double longitude) = 0;
    virtual void SetRouteLineWidth(int wdth) = 0;
    virtual void SetRouteLineColor(int clr) = 0;
    virtual int GetRouteLineWidth() = 0;
    virtual int GetRouteLineColor() = 0;
#ifdef TARGET_PLATFORM_IOS
    virtual int getNativeZoomLevel() = 0;
#endif
    virtual void SetZoomLevel(int zoomLevel) = 0;
    virtual void ShowPin(int pinIndex, SpBrString* imageac, SpBrString* imagedeac, SpBrString* label, SpBrString* sublabel, SpBrString* lat, SpBrString* lon, bool draggable, bool animate , bool &firstShow, bool vsb = true) = 0;
    virtual void RemovePins() = 0;
    virtual void DrawRoute(std::vector<SpUtLocation*>& locArray, SpDataSet *dataset) = 0;
    virtual void RemoveRoutes() = 0;
    void PinSelected(char *pinData);
    virtual void RemovePin(SpBrString* pinId){}
    virtual void UpdatePin(SpMapViewPin* pin){}
    /**
     * this must return new created string
     */
    virtual SpBrString* GetTouchLatitude() = 0;
    /**
	 * this must return new created string
	 */
    virtual SpBrString* GetTouchLongitude() = 0;

public:
    float centerLatitude;
    float iCenterLatitude;
    float centerLongitude;
    float iCenterLongitude;
    int routeLineWidth, iRouteLineWidth;
    int routeLineColor, iRouteLineColor;

protected:


    bool enableZoom, iEnableZoom;
    bool enableScroll, iEnableScroll;
    bool showUserLocation, iShowUserLocation;
    bool showPins, iShowPins;
    bool zoomControlsEnabled, iZoomControlsEnabled;
    bool myLocationButtonEnabled, iMyLocationButtonEnabled;
    /**
     * 0 => standard
     * 1 => satallite
     * 2 => hybrid
     */
    int mapType, iMapType;
    char mapZ, iMapZ;


    std::vector<SpBrParcelable*> pinDataSources;
    SpDataBridge* selImage;
    SpDataBridge* unSelImage;
    SpDataBridge* title;
    SpDataBridge* subtitle;
    SpDataBridge* latitudes;
    SpDataBridge* longitudes;
// JS Stuff
public:
    int zoomLevel, iZoomLevel;
    std::vector<SpMapViewPin*> allPins;
    int GetMapType();
    int GetZoomLevel();
    bool IsEnableZoom();
    bool IsEnableScroll();
    bool IsShowUserLocation();
    bool IsShowPins();
    bool IsZoomControlsEnabled();
    bool IsMyLocationButtonEnabled();

    virtual void SetMapType(int type);
	void SetEnableScroll(bool b);
	void SetShowUserLocation(bool b);
    void RemovePinFromArray(SpBrString* pinId);
    void SetZoomControlsEnabled(bool b);
    void SetMyLocationButtonEnabled(bool b);
};

#endif /* SPBRNUIMAPVIEW_H_ */
