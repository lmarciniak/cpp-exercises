#include "regularpolyhedron.h"
#include <cmath>

using namespace poly;

RegularPolyhedron::RegularPolyhedron(float side, int amount, float height)
    : m_side(side), m_amount(amount), m_height(height)
{
    this->m_baseArea = (this->m_side*this->m_side*this->m_amount) / (4*tan(M_PI/this->m_amount));
}

RegularPolyhedron::~RegularPolyhedron()
{

}

float RegularPolyhedron::getBaseArea() const
{
    return this->m_baseArea;
}

float RegularPolyhedron::getHeight() const
{
    return this->m_height;
}
