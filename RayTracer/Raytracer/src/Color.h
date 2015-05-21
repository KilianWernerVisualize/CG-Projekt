/*
 * Color.h
 *
 *  Created on: 19.05.2015
 *      Author: JANTO
 */

#ifndef COLOR_H_
#define COLOR_H_

class Color {
public:
	Color(float r, float g, float b, float a);
	Color(float r, float g, float b);
	Color();
	virtual ~Color();

	float R, G, B, A;
};

#endif /* COLOR_H_ */
