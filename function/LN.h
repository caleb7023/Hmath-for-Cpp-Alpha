#ifndef LN
#define LN

#include "EZ_LN.h"

double ln(double exponent){
    if(0 <= exponent){
        return ez_ln(exponent);
    }else{
        std::cout << "Hmath_complex_error:\n\nYou can not use negativ number for this functhion.\nTry using lncd()." << std::endl;
        exit(1);
    }
}

complex lnc(complex exponent){
    if(0 <= exponent.real()){
        return ez_lnc(exponent);
    }else{
        return ez_lnc(exponent);
    }
}

#endif