#include "StreetLight.h"



StreetLight::StreetLight()
{
}


StreetLight::~StreetLight()
{
}

void StreetLight::Display() {
	glPushMatrix();
	glPushAttrib(GL_ALL_ATTRIB_BITS);

	glTranslatef(pos[0], pos[1], pos[2]);
	glScalef(scale[0], scale[1], scale[2]);
	glRotatef(rotation[1], 0.f, 1.f, 0.f);
	glRotatef(rotation[0], 1.f, 0.f, 0.f);
	glRotatef(rotation[2], 0.f, 0.f, 1.f);

	DrawLight();

	glPopAttrib();
	glPopMatrix();
}

void StreetLight::DrawLight() {
	glColor3f(1.f, 1.f, 1.f);
	glPushMatrix();
	glTranslatef(0.f, 2.5f, 0.f);
	glScalef(0.2f, 5.f, 0.2f);
	glutSolidCube(1.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.f, 4.9f, -1.f);
	glScalef(0.2f, 0.2f, 2.f);
	glutSolidCube(1.0);
	glPopMatrix();
}