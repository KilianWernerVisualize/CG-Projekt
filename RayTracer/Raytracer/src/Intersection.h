/*
 * Intersection.h
 *
 *  Created on: 19.05.2015
 *      Author: JANTO
 */

#ifndef INTERSECTION_H_
#define INTERSECTION_H_

class Intersection {
public:
	Intersection();
	virtual ~Intersection();

	glm::vec3 point;
	//TODO int -> Primitiv
	int winner;
	float dist;
};

Intersection::Intersection(){
	point = glm::vec3();
	winner = 0;
	dist = INT_MAX;
}

#endif /* INTERSECTION_H_ */
