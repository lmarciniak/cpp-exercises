#include "regularpyramid.h"

using namespace poly;

RegularPyramid::RegularPyramid(float side, int amount, float height)
    : RegularPolyhedron(side, amount, height)
{ 
}

RegularPyramid::~RegularPyramid()
{
}

float RegularPyramid::volume()
{
    return this->getBaseArea()*this->getHeight() / 3;
}

