#ifndef EZ_FACTORIAL
#define EZ_FACTORIAL

double ez_factorial(int n){
    double ans = 1;
    for(int i = 1; i <= n; i++){
        ans *= i;
    }
    return ans;
}

#endif