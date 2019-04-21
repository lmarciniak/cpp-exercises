#include "triangle.h"
#include <fstream>
#include <cmath>

Triangle::Triangle(const Point p1, const Point p2, const Point p3)
    : p1(p1), p2(p2), p3(p3)
{
}

bool Triangle::save(const std::string &path)
{
    std::fstream file;
    file.open(path, std::ios_base::out);
    if (!file.is_open()) return false;
    file << "Triangle" << std::endl;
    file << this->p1.x << " " << this->p1.y << std::endl;
    file << this->p2.x << " " << this->p2.y << std::endl;
    file << this->p3.x << " " << this->p3.y << std::endl;
    float a = sqrt(pow(this->p2.x-this->p1.x, 2)+pow(this->p2.y-this->p1.y, 2));
    float b = sqrt(pow(this->p3.x-this->p1.x, 2)+pow(this->p3.y-this->p1.y, 2));
    float c = sqrt(pow(this->p2.x-this->p3.x, 2)+pow(this->p2.y-this->p3.y, 2));
    file << a+b+c << std::endl;
    float p = (a+b+c)/2;
    file << sqrt(p*(p-a)*(p-b)*(p-c)) << std::endl;
    file.close();
    return true;
}
