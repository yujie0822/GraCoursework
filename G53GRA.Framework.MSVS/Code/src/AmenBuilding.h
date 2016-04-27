#pragma once
#include "F:\code\GRAcode\GraCoursework\G53GRA.Framework.MSVS\Framework\Interface\DisplayableObject.h"
class AmenBuilding :
	public DisplayableObject
{
public:
	AmenBuilding();
	~AmenBuilding();
	void Display();
	void setTextures(GLuint* _texids);  // Setter to assign texture binding ids
private:
	void DrawBuilding();
	GLuint* texids;
};

