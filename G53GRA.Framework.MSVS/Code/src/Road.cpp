#include "Road.h"
using namespace std;


Road::Road(const string& filename)
{
	texID = Scene::GetTexture(filename);
}

Road::~Road()
{
}

void Road::Display() {
	glPushMatrix();
	glPushAttrib(GL_ALL_ATTRIB_BITS);

	glTranslatef(pos[0], pos[1], pos[2]);
	glScalef(scale[0], scale[1], scale[2]);
	glRotatef(rotation[1], 0.f, 1.f, 0.f);
	glRotatef(rotation[0], 1.f, 0.f, 0.f);
	glRotatef(rotation[2], 0.f, 0.f, 1.f);
	for (int i = 0; i < roadLength; i++)
	{
		DrawRoad();
		glTranslatef(0.f, 0.f, 6.9f);

	}


	glPopAttrib();
	glPopMatrix();
}

void Road::DrawRoad() {
	// Enable Texturing
	glEnable(GL_TEXTURE_2D);
	// Tell openGL which texture buffer to use
	glBindTexture(GL_TEXTURE_2D, texID);
	glBegin(GL_QUADS);
	//draw the surface

	// set the normal of the surface
	glNormal3f(0.0f, 1.0f, 0.0f);

	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(0.0f, 0.0f, 6.9f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(4.8f, 0.0f, 6.9f);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(4.8f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glEnd();

	// Bind to the blank buffer to stop ourselves accidentaly
	// using the wrong texture in the next draw call
	glBindTexture(GL_TEXTURE_2D, 0);
	// Stop performing texturing
	glDisable(GL_TEXTURE_2D);
}

void Road::setLength(int l) {
	roadLength = l;
}