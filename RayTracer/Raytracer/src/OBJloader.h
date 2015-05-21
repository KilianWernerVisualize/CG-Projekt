/*
 * OBJloader.h
 *
 *  Created on: 21.05.2015
 *      Author: KWU
 */

#ifndef SRC_OBJLOADER_H_
#define SRC_OBJLOADER_H_

#include "Face.h"

bool loadOBJ(
		const char* path,
		std::vector<Face>& out_faces
);


#endif /* SRC_OBJLOADER_H_ */
