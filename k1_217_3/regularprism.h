#ifndef REGULARPRISM_H
#define REGULARPRISM_H
#include "regularpolyhedron.h"

namespace poly {
class RegularPrism : public RegularPolyhedron
{
public:
    RegularPrism(float side, int amount, float height);
    virtual ~RegularPrism();
    virtual float volume();

};
}

#endif // REGULARPRISM_H
