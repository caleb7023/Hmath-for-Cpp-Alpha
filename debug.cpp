#include "Hmath.hpp"

int main(void){
    hmath::complex val_a;
    double a[64];
    for(unsigned short i = 0; i < 64; i++){
        a[63 - i] = 2 / ((double)(i) * 2 + 1);
    }
    double val_c = hmath::ln(3);
    hmath::complex val_b = hmath::lnc(hmath::rcomplex(1, -3));
    val_a = hmath::sinc(hmath::rcomplex(4, -7));
    return 0;
}