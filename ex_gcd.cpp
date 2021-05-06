/*************************************************************************
	> File Name: ex_gcd.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 13 Jul 2020 11:27:41 PM CST
 ************************************************************************/
#include <stdio.h>

int ex_gcd(int a, int b, int *x, int *y) {
    if (!b) {
        *x = 1, *y = 0;
        return a;
    }
    // int xx, yy, ret = ex_gcd(b, a % b, &xx, &yy);
    int ret = ex_gcd(b, a % b, y, x);
    //*x = yy;
    //*y = xx - a / b * yy;
    *y -= a / b * (*x);
    return ret;
}

int main() {
    int a, b, x, y;
    while(~scanf("%d%d", &a, &b)) {
        printf("ex_gcd(%d, %d) = %d\n", a, b, ex_gcd(a, b, &x, &y));
        printf("%d * %d + %d * %d = %d\n", a, x, b, y, a * x + b * y);
    }
    return 0;
}
