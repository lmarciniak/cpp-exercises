#include "circle.h"
#include <fstream>
#include <cmath>

Circle::Circle(const Shape::Point p1, const float r)
    : p1(p1), r(r)
{
}

bool Circle::save(const std::string &path)
{
    std::fstream file;
    file.open(path, std::ios_base::out);
    if (!file.is_open()) return false;
    file << "Circle" << std::endl;
    file << this->p1.x << " " << this->p1.y << std::endl;
    file << this->r << std::endl;
    file << 2*M_PI*this->r << std::endl;
    file << M_PI*this->r*this->r << std::endl;
    file.close();
    return true;
}
