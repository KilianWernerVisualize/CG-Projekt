/*
 * Color.cpp
 *
 *  Created on: 21.05.2015
 *      Author: JANTO
 */

#include "Color.h"

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
Color::Color() {
	R = 0.0;
	G = 0.0;
	B = 0.0;
	A = 1.0;
}

Color::~Color() {
	// TODO Auto-generated destructor stub
}

