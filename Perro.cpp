#include "Perro.h"

void Perro::DibujarPerro(float x, float y, float z) {
	glTranslatef(x,y,z);
	glPushMatrix();

		glPushMatrix();

			glTranslatef(-1.5, 0, 0);
			//glutWireTeapot(0.5);
			glBegin(GL_TRIANGLES);
				glVertex3f(1, 0, 0);
				glVertex3f(0, 1, 0);
				glVertex3f(-1, 0, 0);
			glEnd();

			glPopMatrix();

			glPushMatrix();

				glTranslatef(0, 1.5, 0);
				glutSolidSphere(0.5, 20, 20);

		glPopMatrix();

	glPopMatrix();
}