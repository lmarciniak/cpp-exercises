#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : public Shape
{
private:
    Point p1;
    float r;
public:
    Circle(const Point p1, const float r);
    virtual bool save(const std::string& path);
};

#endif // CIRCLE_H
