#ifndef COS
#define COS

#include "EZ_POW.h"

/*
 * $ \cos(\theta) = \sum_{n = 0}^{\infty}\frac{(-1)^n}{(2n)!}\theta^{2n} $
 */

inline const double factorial_list_for_cos[12] = {
    1,
    2,
    24,
    720,
    40320,
    3628800,
    479001600,
    87178291200,
    20922789888000,
    6402373705728000,
    2.43290200817664e+18,
    1.1240007277776077e+21
};

double cos(double theta){
    double ans = 0;
    short pm = -1;
    for(unsigned short int i = 0; i < 12; i++){
        pm *= -1;
        ans += ez_pow(theta, 2 * i) / factorial_list_for_cos[i] * pm;
    }
    return ans;
}

complex cosc(complex theta){
    complex ans = rcomplex(0, 0);
    short pm = -1;
    for(unsigned short int i = 0; i < 12; i++){
        pm *= -1;
        ans += ez_powc(theta, 2 * i) / factorial_list_for_cos[i] * pm;
    }
    return ans;
}

#endif