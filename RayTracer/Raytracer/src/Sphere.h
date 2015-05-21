/*
 * Sphere.h
 *
 *  Created on: 21.05.2015
 *      Author: Marc
 */

#ifndef SPHERE_H_
#define SPHERE_H_

#include "Color.h"

class Sphere {

private:
	glm::vec3 position;
	glm::vec3 direction;
	float radius;
	float flexibility;
	float friction;
	Color color;

public:
	Sphere();
	Sphere(glm::vec3, float, glm::vec3);
	Sphere(glm::vec3, float, glm::vec3, float, float, Color);

	glm::vec3 getPosition();
	glm::vec3 getDirection();
	float getRadius();
	float getFlexibility();
	float getFriction();
	Color getColor();

	void setPosition(glm::vec3);
	void setDirection(glm::vec3);
	void setRadius(float);
	void setFlexibility(float);
	void setFriction(float);
	void setColor(Color);
};

#endif /* SPHERE_H_ */
