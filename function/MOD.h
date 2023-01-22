#ifndef MOD
#define MOD

#include "FLOOR.h"

double mod(double value_a, double value_b){
    return value_a - floor(value_a / value_b) * value_b;
}

#endif