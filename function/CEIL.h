#ifndef CEIL
#define CEIL

double ceil(double value_a){
    return 0 < value_a ? (long)(value_a + 1) : ((double)(long)(value_a) == value_a ? value_a : (long)(value_a));
}

complex ceilc(complex value_a){
    return rcomplex(ceil(value_a.real()), ceil(value_a.imag()));
}

#endif