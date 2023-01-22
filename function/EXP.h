#ifndef EXP
#define EXP

#include "EZ_POW.h"

inline const double factorial_list_for_exp[16] = {
    1,
    1,
    0.5,
    0.16666666666666666,
    0.041666666666666664,
    0.0083333333333333332,
    0.0013888888888888889,
    0.00019841269841269841,
    2.4801587301587302e-05,
    2.7557319223985893e-06,
    2.7557319223985888e-07,
    2.505210838544172e-08,
    2.08767569878681e-09,
    1.6059043836821613e-10,
    1.1470745597729725e-11,
    7.6471637318198164e-13,
};

double exp(double exponent){
    double ans = 0;
    for(unsigned short int i; i < 16; i++){
        ans += ez_pow(exponent, i) * factorial_list_for_exp[i];
    }
    return ans;
}

#endif