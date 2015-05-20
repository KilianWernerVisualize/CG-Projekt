#include <iostream>
using namespace std;
#include <limits>
#include <glm/glm.hpp>
using namespace glm;
#include "Color.h"
#include "Ray.h"
#include "Intersection.h"

//define Background-Color
Color backgroundColor = Color(0.0,0.0,0.0,1.0);


Intersection next_intersection(Ray ray){
	float maxdist = INT_MAX;
	Intersection intersection;
	intersection.winner = 0;
	for (int i=0;i<primitive.length;i++){
		intersection = test_primitive(primitive[i], ray);
		if (intersection.dist < maxdist) {
			maxdist = intersection.dist;
			intersection.winner = primitive[i];
		}
	}
	return intersection;
}

Color color_at_intersection(Ray ray, Intersection intersection){
	return Color(1.0,1.0,1.0,1.0);
}

Color color_from(Ray ray){
	Intersection intersection = next_intersection(ray);
	if (intersection.winner == 0) {
		return backgroundColor;
	} else {
		return color_at_intersection(ray, intersection);
	}
}

int main(int argc, char *argv[]) {
	cout << "Started..." << endl;

	//define Resolution
	int width = 640;
	int height = 480;

	//define Eye-Point
	Ray ray;
	ray.origen = vec3(0.0,0.0,-5.0);

	//define View-Plane (corner = bottom-left)
	vec3 viewcorner = vec3(-1.0,-1.0,0.0);
	vec3 viewwidth = vec3(2.0,0.0,0.0);
	vec3 viewheight = vec3(0.0,2.0,0.0);

	//GLCreate window
	//TODO window

	for (int x=0;x<width;x++){
		for (int y=0;y<height;y++){
			//compute Ray-direction
			ray.direction = viewcorner + viewwidth*((float)x/width) + viewheight*((float)y/height);
			normalize(ray.direction);
			//GLPaint Pixel (x,y) = color_from(ray);
			// TODO paintpixel
		}
	}

	return 0;
}
