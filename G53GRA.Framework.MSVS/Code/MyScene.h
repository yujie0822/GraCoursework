#pragma once

#include "Scene.h"
#define _USE_MATH_DEFINES
#include <math.h>

class MyScene :
	public Scene
{
public:
	MyScene(int argc, char** argv, const char *title, const int& windowWidth, const int& windowHeight);
	~MyScene(){};

private:

	void Initialise();
	void Projection();
	float camrad, camangle = 0.f;
	void cameraRadius();
};