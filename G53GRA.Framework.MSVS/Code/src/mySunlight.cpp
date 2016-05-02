#include "mySunlight.h"

mySunlight::mySunlight():day(0)
{
	ambient[0] = 0.4f;    // Set the ambient colour of the light
	ambient[1] = 0.4f;
	ambient[2] = 0.4f;
	ambient[3] = 1.f;

	diffuse[0] = 0.8f;    // Set the diffuse colour of the light
	diffuse[1] = 0.8f;
	diffuse[2] = 0.8f;
	diffuse[3] = 1.f;

	specular[0] = 1.f;   // Set the specular colour of the light
	specular[1] = 1.f;
	specular[2] = 1.f;
	specular[3] = 1.f;
}


mySunlight::~mySunlight()
{
}

void mySunlight::Update(const double& deltaTime) {
	if (day==1)
	{
		if (night>=1)
		{
			for (int i = 0; i < 3; i++)
			{
				diffuse[i] += 0.1f*(float)deltaTime;
				if (diffuse[i]>0.8f)
				{
					diffuse[i] = 0.8f;
					day = 0;
				}
			}
			for (int i = 0; i < 3; i++)
			{
				ambient[i] += 0.05f*(float)deltaTime;
				if (ambient[i]>0.4f)
				{
					ambient[i] = 0.4f;
					day = 0;
				}
			}
		}
		else
		{
			night += 0.5f*(float)deltaTime;
		}


	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			diffuse[i] -= 0.1f*(float)deltaTime;
			if (diffuse[i]<0.f)
			{
				diffuse[i] = 0.f;
				day = 1;
			}
		}
		for (int i = 0; i < 3; i++)
		{
			ambient[i] -= 0.05f*(float)deltaTime;
			if (ambient[i]<0.f)
			{
				ambient[i] = 0.f;
				day = 1;
			}
		}
		night = 0;
	}

	// turn lighting on
	glEnable(GL_LIGHTING);


	// pass openGL the lighting model parameters for the Phong reflection model
	glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
	glLightf(GL_LIGHT0, GL_LINEAR_ATTENUATION, 0.05);

	float ldirection[] = { pos[0], pos[1], pos[2], 0.f };
	glLightfv(GL_LIGHT0, GL_POSITION, ldirection);

	// enable light 0
	glEnable(GL_LIGHT0);
}
