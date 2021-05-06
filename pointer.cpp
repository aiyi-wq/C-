/*************************************************************************
	> File Name: pointer.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 21 May 2020 06:57:06 PM CST
 ************************************************************************/
#include <stdio.h>

struct Data {
  int x, y;  
};

int main() {
    struct Data a[2], *p = a;
    a[0].x = 1;
    a[1].x = 2;
    printf("a[1].x = %d\n", a[1].x);
    printf("(*(p + 1)) = %d\n", (*(p + 1)).x);
    printf("(*(a + 1)) = %d\n", (*(a + 1)).x);
    printf("p[1].x = %d\n", p[1].x);
    printf("(&p[1])->x = %d\n", (&p[1])->x);
    printf("(a + 1)->x = %d\n", (a + 1)->x);
    printf("(p + 1)->x = %d\n", (p + 1)->x);
    return 0;
}
