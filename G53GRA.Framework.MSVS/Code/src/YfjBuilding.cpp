#include "YfjBuilding.h"



YfjBuilding::YfjBuilding()
{
}


YfjBuilding::~YfjBuilding()
{
}

void YfjBuilding::Display() {
	glPushMatrix();
	glPushAttrib(GL_ALL_ATTRIB_BITS);

	glTranslatef(pos[0], pos[1], pos[2]);
	glScalef(scale[0], scale[1], scale[2]);
	glRotatef(rotation[1], 0.f, 1.f, 0.f);
	glRotatef(rotation[0], 1.f, 0.f, 0.f);
	glRotatef(rotation[2], 0.f, 0.f, 1.f);

	DrawBuilding();

	glPopAttrib();
	glPopMatrix();
}

void YfjBuilding::DrawBuilding() {
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texids[0]);
	glBegin(GL_TRIANGLE_FAN);
	//draw the front face
		glNormal3f(0.0f, 0.0f, 1.0f);

		glTexCoord2f(0.0f, 1.0f / 10.0f);
		glVertex3f(0.0f, 1.0f, 4.0f);
		glTexCoord2f(1.0f/24.0f, 0.0f);
		glVertex3f(1.0f, 0.0f, 4.0f);
		glTexCoord2f(21.0f / 24.0f, 0.0f);
		glVertex3f(21.0f, 0.0f, 4.0f);
		glTexCoord2f(1.0f, 1.0f / 5.0f);
		glVertex3f(24.0f, 2.0f, 4.0f);
		glTexCoord2f(5.0f / 6.0f, 1.0f);
		glVertex3f(20.0f, 10.0f, 4.0f);

	glEnd();

	glBindTexture(GL_TEXTURE_2D, texids[1]);
	glBegin(GL_TRIANGLE_FAN);
	//draw the back face
		glNormal3f(0.0f, 0.0f, -1.0f);

		glTexCoord2f(0.0f, 1.0f/5.0f);
		glVertex3f(24.0f, 2.0f, 0.0f);
		glTexCoord2f(1.0f / 8.0f,0.0f);
		glVertex3f(21.0f, 0.0f, 0.0f);
		glTexCoord2f(21.0f / 24.0f, 0.0f);
		glVertex3f(1.0f, 0.0f, 0.0f);
		glTexCoord2f(1, 1.0f / 10.0f);
		glVertex3f(0.0f, 1.0f, 0.0f);
		glTexCoord2f(1.0f / 6.0f, 1.0f);
		glVertex3f(20.0f, 10.0f, 0.0f);

	glEnd();


	glBindTexture(GL_TEXTURE_2D, texids[2]);
	glBegin(GL_QUADS);

	glTexCoord2f(0.f,0.f);
	glVertex3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(1.f, 0.f);
	glVertex3f(1.0f, 0.0f, 4.0f);
	glTexCoord2f(1.f, 1.f);
	glVertex3f(0.0f, 1.0f, 4.0f);
	glTexCoord2f(0.f, 1.f);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, texids[3]);
	glBegin(GL_QUADS);

	glTexCoord2f(0.f, 0.f);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(1.f, 0.f);
	glVertex3f(0.0f, 1.0f, 4.0f);
	glTexCoord2f(1.f, 1.f);
	glVertex3f(20.0f, 10.0f, 4.0f);
	glTexCoord2f(0.f, 1.f);
	glVertex3f(20.0f, 10.0f, 0.0f);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, texids[4]);
	glBegin(GL_QUADS);

	glTexCoord2f(1.f, 1.f);
	glVertex3f(20.0f, 10.0f, 0.0f);
	glTexCoord2f(0.f, 1.f);
	glVertex3f(20.0f, 10.0f, 4.0f);
	glTexCoord2f(0.f, 0.f);
	glVertex3f(24.0f, 2.0f, 4.0f);
	glTexCoord2f(1.f, 0.f);
	glVertex3f(24.0f, 2.0f, 0.0f);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, texids[5]);
	glBegin(GL_QUADS);
	glTexCoord2f(1.f, 1.f);
	glVertex3f(24.0f, 2.0f, 0.0f);
	glTexCoord2f(0.f, 1.f);
	glVertex3f(24.0f, 2.0f, 4.0f);
	glTexCoord2f(0.f, 0.f);
	glVertex3f(21.0f, 0.0f, 4.0f);
	glTexCoord2f(1.f, 0.f);
	glVertex3f(21.0f, 0.0f, 0.0f);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, 0);
	glDisable(GL_TEXTURE_2D);

}

void YfjBuilding::setTextures(GLuint* _texids) {
	texids = _texids;
}