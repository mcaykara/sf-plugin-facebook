/*
 * SpUtSize.h
 *
 *  Created on: Jun 23, 2011
 *      Author: umit
 */

#ifndef SPUTSIZE_H_
#define SPUTSIZE_H_

class SpUtSize {
	public:
		int w;
		int h;
	public:
		SpUtSize();
		SpUtSize(int w, int h);
		void SetW(int w);
		void SetH(int h);
		int GetW() const;
		int GetH() const;
};

#endif /* SPUTSIZE_H_ */
