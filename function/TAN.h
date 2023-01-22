#ifndef TAN
#define TAN

#include "SIN.h"
#include "COS.h"

/*
 * $ \tan(\theta) = \frac{\cos(\theta)}{\sin(\theta)} $
 */

double tan(double theta){
    double ans = sin(theta) / cos(theta);
    return ans;
}

complex tanc(complex theta){
    complex ans = sinc(theta) / cosc(theta);
    return ans;
}

#endif