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
	virtual ~Color();

	float R, G, B, A;
};

Color::Color(float r, float g, float b, float a){
	R = r;
	G = g;
	B = b;
	A = a;
}

Color::Color(float r, float g, float b){
	R = r;
	G = g;
	B = b;
	A = 1.0;
}

#endif /* COLOR_H_ */
