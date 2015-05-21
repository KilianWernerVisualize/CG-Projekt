/*
 * Sphere.cpp
 *
 *  Created on: 21.05.2015
 *      Author: Marc
 */

#include "Sphere.h"

Sphere::Sphere() {
	position = glm::vec3(0.0,0.0,0.0);
	direction = glm::vec3(0.0,0.0,0.0);
	radius = 1;
	flexibility = 0;
	friction = 0;
	color = Color(0,0,0);
}

Sphere::Sphere(glm::vec3 pos, float rad, glm::vec3 dir) {
		position = pos;
		direction = dir;
		radius = rad;
		flexibility = 0;
		friction = 0;
		color = Color(0,0,0);
}

Sphere::Sphere(glm::vec3 pos, float rad, glm::vec3 dir, float flex, float fric, Color col) {
		position = pos;
		direction = dir;
		radius = rad;
		flexibility = flex;
		friction = fric;
		color = col;
}

glm::vec3 Sphere::getPosition(){
	return position;
}

glm::vec3 Sphere::getDirection(){
	return direction;
}

float Sphere::getRadius(){
	return radius;
}

float Sphere::getFlexibility(){
	return flexibility;
}

float Sphere::getFriction(){
	return friction;
}

Color Sphere::getColor(){
	return color;
}

void Sphere::setPosition(glm::vec3 pos){
	position = pos;
}

void Sphere::setDirection(glm::vec3 dir){
	direction = dir;
}

void Sphere::setRadius(float rad){
	radius = rad;
}

void Sphere::setFlexibility(float flex){
	flexibility = flex;
}

void Sphere::setFriction(float fric){
	friction = fric;
}

void Sphere::setColor(Color col){
	color = col;
}

