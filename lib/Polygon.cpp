#include <cmath>
#include "Polygon.h"
#include "Point.h"
#include <iostream>


Polygon::Polygon(){
  for (size_t i = 0; i < 3; i++) color[i] = 0;
  pos = new Point();
}

Polygon::Polygon(Point* pos, double color[3]){
  for (size_t i = 0; i < 3; i++) this->color[i] = color[i];
  this->pos = pos;
}

Polygon::Polygon(Point* pos){
  for (size_t i = 0; i < 3; i++) this->color[i] = 0;
  this->pos = pos;
}

Polygon::Polygon(Polygon* p) {
  for (size_t i = 0; i < 3; i++) this->color[i] = p->color[i];
  this->pos = p->pos;
}

void Polygon::position(double x, double y) {
  pos = new Point(x, y);
}
void Polygon::position(Point* newPos) {
  pos = newPos;
}
Point* Polygon::position(){
  return pos;
}