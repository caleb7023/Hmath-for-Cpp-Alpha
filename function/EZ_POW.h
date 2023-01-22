#ifndef EZ_POW
#define EZ_POW

inline double ez_pow(double base, double exponent){
    double ans = 1;
    for(short i = 0; i < exponent; i++){
        ans *= base;
    }
    return ans;
}

inline complex ez_powc(complex base, double exponent){
    complex ans = base;
    for(short i = 1; i < exponent; i++){
        ans *= base;
    }
    return ans;
}

#endif