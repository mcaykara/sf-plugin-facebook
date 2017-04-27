/*
 * SpBrNuiMapViewAndroid.h
 *
 *  Created on: Jun 27, 2011
 *      Author: antti
 */

#ifndef SPBRNUIMAPVIEWANDROID_H_
#define SPBRNUIMAPVIEWANDROID_H_

#include "Core/SpBrNuiMapView.h"
#include "Core/SpUtLocation.h"

class SpBrNuiMapViewAndroid: public SpBrNuiMapView {
private:
	float touchLat,touchLon;
public:
	SpBrNuiMapViewAndroid(SpBrBase* base, SpContext* context);
    SpBrNuiMapViewAndroid(SpBrNuiMapViewAndroid* objectToCopy);
	virtual ~SpBrNuiMapViewAndroid();
	void Load();
	void Invalidate(bool skipMainProperty = false);
	void setFocusLocation();
	void ShowUserLocation();
    void SetScrollEnabled(bool value);
    void SetZoomEnabled(bool value);
    void SetZoomControlsEnabled(bool value);
    void SetMyLocationButtonEnabled(bool value);
    void SetCenterLatitude(double latitude);
    void SetCenterLongitude(double longitude);
    void SetZoomLevel(int zoomLevel);
    void ShowPin(int pinIndex, SpBrString* imageac, SpBrString* imagedeac, SpBrString* label, SpBrString* sublabel, SpBrString* lat, SpBrString* lon, bool draggable, bool animate, bool &firstShow, bool visible);
    void RemovePins();
    void DrawRoute(std::vector<SpUtLocation*>& locArray, SpDataSet *dataset);
    void RemoveRoutes();
    SpBrString* GetZoomLevel();
    SpBrString* GetTouchLatitude();
    SpBrString* GetTouchLongitude();
    void updateMapInformation(jdouble centerLat,jdouble centerLon,jdouble touchLat,jdouble touchLon,jint zoomLevel);
    void updateMapPinPos(jdouble Lat,jdouble Lon,jint id);
    void RemovePin(SpBrString* pinId);

    void SetRouteLineWidth(int wdth);
	void SetRouteLineColor(int clr);
	int GetRouteLineWidth();
	int GetRouteLineColor();
	void updatePin(SpMapViewPin *pin);

	void PinSelected(char* pinData);
	void SetMapType(int type);
};

#endif /* SPBRNUIMAPVIEWANDROID_H_ */
