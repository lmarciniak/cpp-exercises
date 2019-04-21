#ifndef REGULARPOLYHEDRON_H
#define REGULARPOLYHEDRON_H

namespace poly {
class RegularPolyhedron
{
private:
    float m_side, m_baseArea, m_height;
    int m_amount;
protected:
    float getBaseArea() const;
    float getHeight() const;
public:
    RegularPolyhedron(float side, int amount, float height);
    virtual ~RegularPolyhedron();
    virtual float volume() = 0;
};
}

#endif // REGULARPOLYHEDRON_H
