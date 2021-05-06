/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 04 Jun 2020 06:41:27 PM CST
 ************************************************************************/
#include<stdio.h>

void funcA(int);
void funcB(int);

void funcB(int n) {
    if (n == 0) return ;
    printf("funcB : %d\n", n);
    funcA(n - 1);
    return ;
}

void funcA(int n) {
    if (n == 0) return ;
    printf("funcA : %d\n", n);
    funcB(n - 1);
    return ;
}

int add(int a, int b) {
    return a + b;
}
