/*
 * Ray.h
 *
 *  Created on: 19.05.2015
 *      Author: JANTO
 */

#ifndef RAY_H_
#define RAY_H_

class Ray {
public:
	Ray();
	virtual ~Ray();

	glm::vec3 origen;
	glm::vec3 direction;
};

Ray::Ray() {
			origen = glm::vec3(0.0,0.0,0.0);
			direction = glm::vec3(1.0,0.0,0.0);
}

#endif /* RAY_H_ */
