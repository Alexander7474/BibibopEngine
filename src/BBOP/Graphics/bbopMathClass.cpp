#include "../../../include/BBOP/Graphics/bbopMathClass.h"

Vector2f::Vector2f(float nx, float ny): x(nx), y(ny){}
Vector2i::Vector2i(int nx, int ny): x(nx), y(ny){}
Vector2d::Vector2d(double nx, double ny): x(nx), y(ny){}
Vector3i::Vector3i(int nx, int ny, int nz): x(nx), y(ny), z(nz){}

Vector2f rotatePoint(Vector2f point, Vector2f origin, float angle)
{
  float c = cos(angle);
  float s = sin(angle);
  // translate point back to origin:
  point.x -= origin.x;
  point.y -= origin.y;

  // rotate point
  float xnew = point.x * c - point.y * s;
  float ynew = point.x * s + point.y * c;

  // translate point back:
  point.x = xnew + origin.x;
  point.y = ynew + origin.y;
  return point;
}