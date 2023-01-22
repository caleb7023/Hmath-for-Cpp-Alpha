#ifndef SIN
#define SIN

#include "EZ_POW.h"

/*
 * $ \sin(\theta) = \sum_{n = 0}^{\infty}\frac{(-1)^n}{(2n+1)!}\theta^{2n+1} $
 */

inline const double factorial_list_for_sin[16] = {
    1,
    0.16666666666666666,
    0.0083333333333333332,
    0.00019841269841269841,
    2.7557319223985893e-06,
    2.505210838544172e-08,
    1.6059043836821613e-10,
    7.6471637318198164e-13,
    2.8114572543455206e-15,
    8.2206352466243295e-18,
    1.9572941063391263e-20,
    3.8681701706306835e-23,
    6.4469502843844736e-26,
    9.183689863795546e-29,
    1.1309962886447718e-31,
    1.2161250415535181e-34,
};

double sin(double theta){
    double ans = 0;
    short pm = -1;
    for(unsigned short int i = 0; i < 16; i++){
        pm *= -1;
        ans += ez_pow(theta, 2 * i + 1) * factorial_list_for_sin[i] * pm;
    }
    return ans;
}

complex sinc(complex theta){
    complex ans = rcomplex(0, 0);
    short pm = -1;
    for(unsigned short int i = 0; i < 16; i++){
        pm *= -1;
        ans += ez_powc(theta, 2 * i + 1) * factorial_list_for_sin[i] * pm;
    }
    return ans;
}

#endif