/*
 * XMLloader.h
 *
 *  Created on: 21.05.2015
 *      Author: Marc
 */

#ifndef XMLLOADER_H_
#define XMLLOADER_H_

class XMLloader {

private:
	float pos_x;
	float pos_y;
	float pos_z;
	glm::vec3 temp_pos;
	float dir_x;
	float dir_y;
	float dir_z;
	glm::vec3 temp_dir;
	float temp_rad;
	float temp_flex;
	float temp_fric;
	float col_r;
	float col_g;
	float col_b;
	float col_a;
	Color temp_col;
	Sphere temp_sphere;

public:
	bool loadXML(const char*, std::vector<Sphere>&);
};

#endif /* XMLLOADER_H_ */
