/*************************************************************************
	> File Name: gcd.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 13 Jul 2020 11:04:39 PM CST
 ************************************************************************/
#include<stdio.h>

int gcd(int a, int b) {
    //if (!b) return a;
    //return gcd(b, a % b);
    return b ? gcd(b, a % b) : a;
}

int main() {
    int a, b;
    while (~scanf("%d%d", &a, &b)) {
        printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
    }
    return 0;
}
