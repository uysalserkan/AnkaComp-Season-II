#ifndef COPY_CONSTRUCTOR_H
#define COPY_CONSTRUCTOR_H
class Vector2D{
private:
    int x,y;
public:
    void setX(int);
    void setY(int);
    int getX();
    int getY();
    Vector2D(int, int);
    Vector2D(const Vector2D &old_version);
};
#endif
