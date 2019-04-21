#include "regularprism.h"

using namespace poly;

RegularPrism::RegularPrism(float side, int amount, float height)
    : RegularPolyhedron(side, amount, height)
{
}

RegularPrism::~RegularPrism()
{
}

float RegularPrism::volume()
{
    return this->getBaseArea()*this->getHeight();
}
