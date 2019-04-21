#ifndef REGULARPYRAMID_H
#define REGULARPYRAMID_H
#include "regularpolyhedron.h"

namespace poly {
class RegularPyramid : public RegularPolyhedron
{
public:
    RegularPyramid(float side, int amount, float height);
    virtual ~RegularPyramid();
    virtual float volume();
};
}

#endif // REGULARPYRAMID_H
