#ifndef LN
#define LN

#include "EZ_LN.h"
#include "../type/COMPLEX.hpp"

double ln(double exponent){
    return ez_ln(exponent);
}

complex lnc(complex exponent){
    complex exponent_d = exponent;
    if(0 <= exponent_d.real()){
        return ez_lnc(exponent_d);
    }else{
        return ez_lnc(exponent);
    }
}

#endif