#include "polynomial.h"
#include <cstring>
#include <cmath>

Polynomial::Polynomial(int degree, float *arr)
{
    this->m_coefficients = new float[degree+1];
    memcpy(this->m_coefficients, arr, (degree+1)*sizeof(float));
    this->m_degree = degree;
}

Polynomial::Polynomial(const Polynomial &p)
{
    memcpy(this->m_coefficients, p.m_coefficients, (p.m_degree+1)*sizeof(float));
    this->m_degree = p.m_degree;
}

Polynomial::~Polynomial()
{
    delete [] this->m_coefficients;
}

float &Polynomial::getCoefficientRef(int i)
{
    if (i > this->m_degree) {
        float *buffer = new float[this->m_degree+1];
        int oldSize = (this->m_degree+1)*sizeof(float);
        memcpy(buffer, this->m_coefficients, oldSize);
        int oldLength = this->m_degree;
        delete [] this->m_coefficients;
        this->m_degree = i;
        this->m_coefficients = new float[i+1];
        memcpy(this->m_coefficients, buffer, oldSize);
        for (int j = oldLength+1; j < i+1; j++) {
            this->m_coefficients[j] = 0;
        }
        delete [] buffer;
    }
    return this->m_coefficients[i];
}

float Polynomial::getCoefficient(int i) const
{
    if (i > this->m_degree || i < 0) return 0;
    return this->m_coefficients[i];
}

float Polynomial::value(float x) const
{
    float sum = 0;
    for (int i = 0; i <= this->m_degree; i++) {
        sum += this->m_coefficients[i] * pow(x, i);
    }
    return sum;
}
