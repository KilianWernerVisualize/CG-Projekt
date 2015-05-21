/*
 * Intersection.cpp
 *
 *  Created on: 21.05.2015
 *      Author: JANTO
 */

#include "Intersection.h"
#include <cfloat>

Intersection::Intersection(){
	point = glm::vec3();
	winner = 0;
	dist = FLT_MAX;
}
Intersection::~Intersection() {
	// TODO Auto-generated destructor stub
}


