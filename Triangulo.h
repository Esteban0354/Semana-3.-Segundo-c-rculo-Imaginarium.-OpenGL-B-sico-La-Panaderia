#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"
class Triangulo
{
public:
	Triangulo() {};
	void DibujarTriangulo(float x, float y, float z, float vortex1X, float vortex1Y, float vortex1Z, float vortex2X, float vortex2Y, float vortex2z, float vortex3X, float vortex3Y, float vortex3Z);
};