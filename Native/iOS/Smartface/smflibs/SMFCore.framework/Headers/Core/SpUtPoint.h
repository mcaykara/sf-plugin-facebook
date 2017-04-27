/*
 * SpUtPoint.h
 *
 *  Created on: Jun 23, 2011
 *      Author: umit
 */

#ifndef SPUTPOINT_H_
#define SPUTPOINT_H_

class SpUtPoint {
	public:
		int x;
		int y;
	public:
		SpUtPoint();
		SpUtPoint(int x, int y);
		void SetX(int _x);
		void SetY(int y);
		int GetX() const;
		int GetY() const;
};

#endif /* SPUTPOINT_H_ */
