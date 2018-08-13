#ifndef CCOMPLEX_H
#define CCOMPLEX_H
class CComplex {
public:
    CComplex(double pr = 0.0, double pi = 0.0) {real = pr; imag = pi;};
    virtual ~CComplex();
    CComplex operator +(const CComplex& c) const;
    CComplex operator -(const CComplex& c) const;
    CComplex& operator =(const CComplex& c);
    CComplex& operator ++(); //pre increase
    CComplex operator ++(int); //post increase
    static void ShowComplex(const CComplex& c);
private:
    double real;
    double imag;
};

#endif