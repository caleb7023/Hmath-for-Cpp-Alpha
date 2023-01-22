#include "type/COMPLEX.hpp"
#include "function/SIN.h"
#include "function/LN.h"
#include "function/EZ_FACTORIAL.h"
#include <stdio.h>
#include <iostream>

int main(void){
    complex val_a;
    double a[32];
    for(unsigned short i = 0; i < 32; i++){
        a[i] = 2 / ((double)(i) * 2 + 1);
    }
    double val_b = ln(10);
    val_a = sinc(rcomplex(4, -7));
    return 0;
}