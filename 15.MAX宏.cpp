/*************************************************************************
	> File Name: 15.MAX宏.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 18 May 2020 11:11:45 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX(a, b) ({\
	__typeof(a) __a = (a);\
	__typeof(b) __b = (b);\
	__a > __b ? __a : __b;\
})
#define P(a) {\
    printf("%s = %d\n", #a, a);\
}

int main() {
    int a = 7;
    P(MAX(2, 3));
    P(5 + MAX(2, 3));
    P(MAX(2, MAX(3, 4)));
    P(MAX(2, 3 > 4 ? 3 : 4));
    P(MAX(a++, 6));
    P(a);
    return 0;
}

