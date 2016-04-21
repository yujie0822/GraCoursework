#pragma once
#include "DisplayableObject.h"

class myStage :
	public DisplayableObject
{
public:
	myStage();
	~myStage();
	void Display();
	void setTextures(GLuint* _texids);  // Setter to assign texture binding ids
private:
	void drawStage();
	bool toTexture = false;
	GLuint* texids;
};


