/*
 * SpBrNuiMapViewIOS.h
 *
 *  Created on: Jul 6, 2011
 *      Author: antti
 */

#ifndef SPBRNUIMAPVIEWIOS_H_
#define SPBRNUIMAPVIEWIOS_H_

#include "Core/SpBrNuiMapView.h"

class SpBrNuiMapViewIOS: public SpBrNuiMapView {
public:
	SpBrNuiMapViewIOS(SpBrBase* base, SpContext* context);
    SpBrNuiMapViewIOS(SpBrNuiMapViewIOS* objectToCopy);
	virtual ~SpBrNuiMapViewIOS();
	void Load();
    void Unload();
    void Invalidate(bool skipMainProperty = false);
    void SetMapType(int type);
    void SetScrollEnabled(bool value);
    void SetZoomEnabled(bool value);
    void SetCenterLatitude(double latitude);
    void SetCenterLongitude(double longitude);
    void SetRouteLineWidth(int wdth);
    void SetRouteLineColor(int clr);
    int GetRouteLineWidth();
    int GetRouteLineColor();
    SpBrString* GetZoomLevel();
    int getNativeZoomLevel();
    void SetZoomLevel(int zoomLevel);
    void ShowPin(int pinIndex, SpBrString* imageac, SpBrString* imagedeac, SpBrString* label, SpBrString* sublabel, SpBrString* lat, SpBrString* lon, bool draggable, bool animate , bool &firstShow, bool vsb = true );
    void RemovePins();
    void DrawRoute(std::vector<SpUtLocation*>& locArray, SpDataSet *dataset);
    void RemoveRoutes();
    SpBrString* GetTouchLatitude();
    SpBrString* GetTouchLongitude();
    void RemovePin(SpBrString* pinId);
    void UpdatePin(SpMapViewPin* pin);

public:
    double mapLatDelta;
    double mapLonDelta;
    void *reporter;

private:
    float touchLat, touchLon;
};

#endif /* SPBRNUIMAPVIEWIOS_H_ */
