#ifndef EZ_LN
#define EZ_LN

#include "../type/COMPLEX.hpp"
#include "EZ_POW.h"

inline const double odd_reciprocal_list_for_ln[64] = {
    0.015748031496062992,    0.016000000000000000,
    0.016260162601626018,    0.016528925619834711,
    0.016806722689075630,    0.017094017094017096,
    0.017391304347826087,    0.017699115044247787,
    0.018018018018018018,    0.018348623853211010,
    0.018691588785046728,    0.019047619047619049,
    0.019417475728155338,    0.019801980198019802,
    0.020202020202020204,    0.020618556701030927,
    0.021052631578947368,    0.021505376344086023,
    0.021978021978021980,    0.022471910112359550,
    0.022988505747126436,    0.023529411764705882,
    0.024096385542168676,    0.024691358024691357,
    0.025316455696202531,    0.025974025974025976,
    0.026666666666666668,    0.027397260273972601,
    0.028169014084507043,    0.028985507246376812,
    0.029850746268656716,    0.030769230769230771,
    0.031746031746031744,    0.032786885245901641,
    0.033898305084745763,    0.035087719298245612,
    0.036363636363636362,    0.037735849056603772,
    0.039215686274509803,    0.040816326530612242,
    0.042553191489361701,    0.044444444444444446,
    0.046511627906976744,    0.048780487804878050,
    0.051282051282051280,    0.054054054054054057,
    0.057142857142857141,    0.060606060606060608,
    0.064516129032258063,    0.068965517241379309,
    0.074074074074074074,    0.080000000000000002,
    0.086956521739130432,    0.095238095238095233,
    0.105263157894736840,    0.117647058823529410,
    0.133333333333333330,    0.153846153846153850,
    0.181818181818181820,    0.222222222222222210,
    0.285714285714285700,    0.400000000000000020,
    0.666666666666666630,
};

inline double ez_ln(double exponent){
    double ans = 0;
    double x = (exponent - 1) / (exponent + 1); 
    double y = ez_pow(x, 2);
    for(unsigned short int i; i < 63; i++){
        ans += odd_reciprocal_list_for_ln[i];
        double sssss = odd_reciprocal_list_for_ln[i];
        ans *= y;
    }
    ans += 2;
    ans *= x;
    return ans;
}

inline complex ez_lnc(complex exponent){
    complex ans = rcomplex(0, 0);
    complex x = (exponent - 1) / (exponent + 1); 
    complex y = ez_powc(x, 2);
    for(unsigned short int i; i < 63; i++){
        ans += odd_reciprocal_list_for_ln[i];
        ans *= y;
    }
    ans += 2;
    ans *= x;
    return ans;
}

#endif