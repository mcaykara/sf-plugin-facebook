/*
 * SpUtLocation.h
 *
 *  Created on: Aug 14, 2012
 *      Author: ugur
 */

#ifndef SPUTLOCATION_H_
#define SPUTLOCATION_H_

class SpUtLocation {
	public:
		SpUtLocation();
		SpUtLocation(float lat, float lon);

        float GetLatitude() const;
		float GetLongitude() const;

    private:
        float lat;
        float lon;
};

#endif /* SPUTLOCATION_H_ */
