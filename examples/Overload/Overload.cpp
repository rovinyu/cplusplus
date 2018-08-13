#include <iostream>
#include "Ccomplex.hpp"

int main(int argc, char* argv[]) {
    CComplex a{1,2}, b{3,4}, c{};
    CComplex::ShowComplex(a++);
    CComplex::ShowComplex(a);
    c = b;
    CComplex::ShowComplex(c);
    CComplex::ShowComplex(++b);
    CComplex::ShowComplex(b);
    CComplex::ShowComplex(a+b);
    CComplex::ShowComplex(b-a);
    return 0;
}