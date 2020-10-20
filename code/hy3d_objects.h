#pragma once
#include "hy3d_vector.h"

struct orientation
{
    float thetaX, thetaY, thetaZ;
};

struct cube
{
    float thetaX, thetaY, thetaZ;
    int nVertices = 8;
    int nLines = 12;
    vec3 vertices[8];
    int lines[24] = {
			0,1,  1,3,  3,2,  2,0,
			0,4,  1,5,	3,7,  2,6,
			4,5,  5,7,	7,6,  6,4 };
};

static cube MakeCube(float side, orientation o)
{
    cube result;
    side /= 2.0f;
    result.vertices[0] = {-side, -side, -side};
    result.vertices[1] = {side, -side, -side};
    result.vertices[2] = {-side, side, -side};
    result.vertices[3] = {side, side, -side};
    result.vertices[4] = {-side, -side, side};
    result.vertices[5] = {side, -side, side};
    result.vertices[6] = {-side, side, side};
    result.vertices[7] = {side, side, side};
    result.thetaX = o.thetaX;
    result.thetaY = o.thetaY;
    result.thetaZ = o.thetaZ;
    return result;
}