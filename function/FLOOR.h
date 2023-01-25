#ifndef FLOOR
#define FLOOR

#include "../type/COMPLEX.hpp"

double floor(double value_a){
    return 0 < value_a ? (long)(value_a) : ((double)(long)(value_a) == value_a ? value_a : (long)(value_a - 1));
}

complex floorc(complex value_a){
    return rcomplex(floor(value_a.real()), floor(value_a.imag()));
}

#endif