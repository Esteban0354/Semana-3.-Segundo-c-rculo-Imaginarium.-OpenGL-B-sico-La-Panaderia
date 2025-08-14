#include "Triangulo.h"
void Triangulo::DibujarTriangulo(float x, float y, float z, float vortex1X, float vortex1Y, float vortex1Z, float vortex2X, float vortex2Y, float vortex2z, float vortex3X, float vortex3Y, float vortex3Z) {
    glPushMatrix();

    glTranslatef(x, y, z);

    glBegin(GL_TRIANGLES); // Crear un triangulo
    glVertex3f(vortex1X, vortex1Y, vortex1Z); // se general individualmente los vortices
    glVertex3f(vortex2X, vortex2Y, vortex2z);
    glVertex3f(vortex3X, vortex3Y, vortex3Z);
    glEnd();

    glPopMatrix();
}