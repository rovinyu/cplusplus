#include <iostream>
#include "Ccomplex.hpp"
using namespace std;

CComplex::~CComplex() {
    
}

CComplex CComplex::operator +(const CComplex& c) {
    return CComplex(real + c.real, imag + c.imag);
}

CComplex CComplex::operator -(const CComplex& c) {
    return CComplex(real - c.real, imag - c.imag);
}

CComplex& CComplex::operator =(const CComplex& c) {
    real = c.real;
    imag = c.imag;
    return *this;
}

//pre increase
CComplex& CComplex::operator ++() {
    real = long(real) + 1;
    imag = long(imag) + 1;
    return *this;
}

//post increase
CComplex CComplex::operator ++(int) {
    CComplex temp{*this};
    real = long(real) + 1;
    imag = long(imag) + 1;
    return temp;
}

void CComplex::ShowComplex(const CComplex& c) {
    cout << "(" << c.real << ", " << c.imag <<"i" << ")" << endl;
}