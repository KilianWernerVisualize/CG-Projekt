/*
 * XMLloader.cpp
 *
 *  Created on: 21.05.2015
 *      Author: Marc
 */

#include "XMLloader.h"
#include "tinyxml2.h"
#include "Sphere.h"

#ifndef XMLCheckResult
	#define XMLCheckResult(a_eResult) if (a_eResult != XML_SUCCESS) { printf("Error: %i\n", a_eResult); return a_eResult; }
#endif

using namespace tinyxml2;

bool XMLloader::loadXML(const char* path, std::vector<Sphere>& out_Spheres) {

XMLDocument xmlDoc;
XMLError eResult = xmlDoc.LoadFile(path);
XMLCheckResult(eResult);
XMLNode* pRoot = xmlDoc.FirstChild();
if (pRoot == nullptr) return false;

XMLElement* pElement = pRoot->FirstChildElement("Sphere");
if (pElement == nullptr) return false;

eResult = pElement->QueryFloatAttribute("position_x", &pos_x);
XMLCheckResult(eResult);
eResult = pElement->QueryFloatAttribute("position_y", &pos_y);
XMLCheckResult(eResult);
eResult = pElement->QueryFloatAttribute("position_z", &pos_z);
XMLCheckResult(eResult);
eResult = pElement->QueryFloatAttribute("radius", &temp_rad);
XMLCheckResult(eResult);
eResult = pElement->QueryFloatAttribute("direction_x", &dir_x);
XMLCheckResult(eResult);
eResult = pElement->QueryFloatAttribute("direction_y", &dir_y);
XMLCheckResult(eResult);
eResult = pElement->QueryFloatAttribute("direction_z", &dir_z);
XMLCheckResult(eResult);
eResult = pElement->QueryFloatAttribute("flexibility", &temp_flex);
XMLCheckResult(eResult);
eResult = pElement->QueryFloatAttribute("friction", &temp_fric);
XMLCheckResult(eResult);
eResult = pElement->QueryFloatAttribute("color_r", &col_r);
XMLCheckResult(eResult);
eResult = pElement->QueryFloatAttribute("color_g", &col_g);
XMLCheckResult(eResult);
eResult = pElement->QueryFloatAttribute("color_b", &col_b);
XMLCheckResult(eResult);
eResult = pElement->QueryFloatAttribute("color_a", &col_a);
XMLCheckResult(eResult);

temp_pos = glm::vec3(pos_x,pos_y,pos_z);
temp_dir = glm::vec3(dir_x,dir_y,dir_z);
temp_col = Color(col_r,col_g,col_b,col_a);

temp_sphere = Sphere(temp_pos, temp_rad, temp_dir, temp_flex, temp_fric, temp_col);

out_Spheres.push_back(temp_sphere);

pElement = pElement->NextSiblingElement("Sphere");

while (pElement != nullptr)
{
	eResult = pElement->QueryFloatAttribute("position_x", &pos_x);
	XMLCheckResult(eResult);
	eResult = pElement->QueryFloatAttribute("position_y", &pos_y);
	XMLCheckResult(eResult);
	eResult = pElement->QueryFloatAttribute("position_z", &pos_z);
	XMLCheckResult(eResult);
	eResult = pElement->QueryFloatAttribute("radius", &temp_rad);
	XMLCheckResult(eResult);
	eResult = pElement->QueryFloatAttribute("direction_x", &dir_x);
	XMLCheckResult(eResult);
	eResult = pElement->QueryFloatAttribute("direction_y", &dir_y);
	XMLCheckResult(eResult);
	eResult = pElement->QueryFloatAttribute("direction_z", &dir_z);
	XMLCheckResult(eResult);
	eResult = pElement->QueryFloatAttribute("flexibility", &temp_flex);
	XMLCheckResult(eResult);
	eResult = pElement->QueryFloatAttribute("friction", &temp_fric);
	XMLCheckResult(eResult);
	eResult = pElement->QueryFloatAttribute("color_r", &col_r);
	XMLCheckResult(eResult);
	eResult = pElement->QueryFloatAttribute("color_g", &col_g);
	XMLCheckResult(eResult);
	eResult = pElement->QueryFloatAttribute("color_b", &col_b);
	XMLCheckResult(eResult);
	eResult = pElement->QueryFloatAttribute("color_a", &col_a);
	XMLCheckResult(eResult);

	temp_pos = glm::vec3(pos_x,pos_y,pos_z);
	temp_dir = glm::vec3(dir_x,dir_y,dir_z);
	temp_col = Color(col_r,col_g,col_b,col_a);

	temp_sphere = Sphere(temp_pos, temp_rad, temp_dir, temp_flex, temp_fric, temp_col);

	out_Spheres.push_back(temp_sphere);

	pElement = pElement->NextSiblingElement("Sphere");
}
return true;
}

