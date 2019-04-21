#ifndef SHAPE_H
#define SHAPE_H
#include <string>

class Shape
{
public:
    struct Point {
        float x, y;
    };
    Shape();
    virtual bool save(const std::string& path) = 0;
};

#endif // SHAPE_H
