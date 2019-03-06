#include <iostream>
#include "Copy-Constructor.h"
void Vector2D::setX(int x1){
    x=x1;
}
void Vector2D::setY(int y1){
    y=y1;
}
int Vector2D::getX(){
    return x;
}
int Vector2D::getY(){
    return y;
}
Vector2D::Vector2D(int x1, int y1){
    x=x1;
    y=y1;
}
Vector2D::Vector2D(const Vector2D &old_version){
    x=old_version.x;
    y=old_version.y;
}
/*
void setX(int);
void setY(int);
int getX();
int getY();
Vector2D(int, int);
Vector2D(const Vector2D &old_version);
*/
