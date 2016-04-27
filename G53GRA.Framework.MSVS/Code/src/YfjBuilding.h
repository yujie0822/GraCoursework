#pragma once
#include "DisplayableObject.h"
class YfjBuilding :
	public DisplayableObject
{
public:
	YfjBuilding();
	~YfjBuilding();
	void Display();
	void setTextures(GLuint* _texids);  // Setter to assign texture binding ids
private:
	void DrawBuilding();
	GLuint* texids;
};

