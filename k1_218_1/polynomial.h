#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H


class Polynomial
{
private:
    float* m_coefficients;
    int m_degree;
public:
    Polynomial(int degree, float *arr);
    Polynomial(const Polynomial&);
    ~Polynomial();
    float& getCoefficientRef(int i);
    float getCoefficient(int i) const;
    float value(float x) const;
};

#endif // POLYNOMIAL_H
