#include "type/COMPLEX.hpp"
#include "function/SIN.h"
#include "function/LN.h"
#include "function/EZ_FACTORIAL.h"
#include <stdio.h>
#include <iostream>

int main(void){
    complex val_a;
    double a[64];
    for(unsigned short i = 0; i < 64; i++){
        a[63 - i] = 2 / ((double)(i) * 2 + 1);
    }
    double val_c = ln(3);
    complex val_b = ez_lnc(rcomplex(1, -3)); // FIXME: Need to make that can use function "lnc()".
    val_a = sinc(rcomplex(4, -7));
    return 0;
}