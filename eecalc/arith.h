//arith.h
//Sam Gallagher
//21 Sept 2016
//
//Header file containing basic arithmetic functions
#ifndef ARITH_H
#define ARITH_H

#include <complex>

template<typename T, typename U>
std::complex<float> par(const T& z1, const U& z2){
    std::complex<float> parOut = z1*z2/(z1+z2);
    return parOut;
}

template<typename T, typename U>
std::complex<float> vdiv(const T& z1, const U& z2){
    std::complex<float> vOut = z2/(z1+z2);
    return vOut;
}

template<typename T, typename U, typename W>
std::complex<float> vdiv(const T& z1, const U& z2, const W& vIn){
    std::complex<float> vOut = z2/(z1+z2);
    std::complex<float> vInComplex(vIn,0);
    vOut = vOut*vInComplex;
    return vOut;
}

#endif // ARITH_H
