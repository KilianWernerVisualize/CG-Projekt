/*
 * Face.h
 *
 *  Created on: 21.05.2015
 *      Author: KWU
 */

#ifndef SRC_FACE_H_
#define SRC_FACE_H_

#include <glm/glm.hpp>
using namespace glm;

class Face{
	public:
	Face(std::vector<glm::vec3>* vertices, std::vector<glm::vec2>* texture_coordinates, std::vector<glm::vec3>* normals);
	virtual ~Face();
	std::vector<glm::vec3>* getvertices(){ return vertices;}
	std::vector<glm::vec2>* gettexture_coordinates(){ return texture_coordinates;}
	std::vector<glm::vec3>* getnormals(){ return normals;}
	private:
	std::vector<glm::vec3>* vertices;
	std::vector<glm::vec2>* texture_coordinates;
	std::vector<glm::vec3>* normals;

};



#endif /* SRC_FACE_H_ */
