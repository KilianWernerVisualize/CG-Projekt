/*
 * OBJloader.cpp
 *
 *  Created on: 21.05.2015
 *      Author: KWU
 */

#include "OBJloader.h"
#include "Face.h"
#include <stdio.h>
#include <glm/glm.hpp>
using namespace glm;

bool loadOBJ(const char* path, std::vector<Face>& out_faces){
	FILE* file = fopen(path, "r");
	if(file == NULL){
		printf("File not found! \n");
		return false;
	}

	std::vector< glm::vec3 > temp_vertices;
	std::vector< glm::vec2 > temp_texture_coordinates;
	std::vector< glm::vec3 > temp_normals;

	char lineHeader[128];
	int res = 0;
	while (res != EOF){
		res = fscanf(file, "%s", lineHeader);
		if (strcmp(lineHeader, "v") == 0){
			glm::vec3 vertex;
			fscanf(file, "%f %f %f\n", &vertex.x, &vertex.y, &vertex.z);
			temp_vertices.push_back(vertex);
		} else if (strcmp(lineHeader, "vt") == 0) {
			glm::vec2 texture_coordinate;
			fscanf(file, "%f %f\n", &texture_coordinate.x, &texture_coordinate.y);
			temp_texture_coordinates.push_back(texture_coordinate);
		} else if (strcmp(lineHeader, "vn") == 0){
		    glm::vec3 normal;
		    fscanf(file, "%f %f %f\n", &normal.x, &normal.y, &normal.z );
		    temp_normals.push_back(normal);
		} else if (strcmp(lineHeader, "f") == 0){
			unsigned int vertexIndex[3], tcIndex[3], normalIndex[3];
			fscanf(file, "%d/%d/%d %d/%d/%d %d/%d/%d\n", &vertexIndex[0], &tcIndex[0], &normalIndex[0], &vertexIndex[1], &tcIndex[1], &normalIndex[1], &vertexIndex[2], &tcIndex[2], &normalIndex[2] );

			std::vector<glm::vec3> vertices;
			glm::vec3& vertex = temp_vertices[vertexIndex[0]-1];
			vertices.push_back(vertex);
			glm::vec3& vertex = temp_vertices[vertexIndex[1]-1];
			vertices.push_back(vertex);
			glm::vec3& vertex = temp_vertices[vertexIndex[2]-1];
			vertices.push_back(vertex);

			std::vector<glm::vec2> texture_coordinates;
			glm::vec2& texture_coordinate = temp_texture_coordinates[tcIndex[0]-1];
			texture_coordinates.push_back(texture_coordinate);
			glm::vec2& texture_coordinate = temp_texture_coordinates[tcIndex[1]-1];
			texture_coordinates.push_back(texture_coordinate);
			glm::vec2& texture_coordinate = temp_texture_coordinates[tcIndex[2]-1];
			texture_coordinates.push_back(texture_coordinate);

			std::vector<glm::vec3> normals;
			glm::vec3& normal = temp_normals[normalIndex[0]-1];
			normals.push_back(normal);
			glm::vec3& normal = temp_normals[normalIndex[1]-1];
			normals.push_back(normal);
			glm::vec3& normal = temp_normals[normalIndex[2]-1];
			normals.push_back(normal);

			Face face(vertices, texture_coordinates, normals);
			out_faces.push_back(face);
		}
	}
}


