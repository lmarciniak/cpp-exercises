#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"

class Triangle : public Shape
{
private:
    Point p1, p2, p3;
public:
    Triangle(const Point p1, const Point p2, const Point p3);
    virtual bool save(const std::string& path);
};

#endif // TRIANGLE_H
