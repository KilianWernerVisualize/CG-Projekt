/*
 * Ray.cpp
 *
 *  Created on: 21.05.2015
 *      Author: JANTO
 */

#include "Ray.h"

Ray::Ray() {
			origen = glm::vec3(0.0,0.0,0.0);
			direction = glm::vec3(1.0,0.0,0.0);
}
Ray::~Ray() {
	// TODO Destructor
}
