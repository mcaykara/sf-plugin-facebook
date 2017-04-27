/*
 * SpUtRect.h
 *
 *  Created on: Jun 22, 2011
 *      Author: umit
 */

#ifndef SPUTRECT_H_
#define SPUTRECT_H_

#include "SpUtPoint.h"
#include "SpUtSize.h"

class SpUtRect {
	public:
		SpUtPoint point;
		SpUtSize size;
	public:
		SpUtRect();
		SpUtRect(SpUtPoint point, SpUtSize size);
		SpUtPoint GetPoint();
		SpUtSize GetSize();
};

#endif /* SPUTRECT_H_ */
