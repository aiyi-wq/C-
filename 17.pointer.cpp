/*************************************************************************
	> File Name: 17.pointer.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 21 May 2020 07:47:51 PM CST
 ************************************************************************/
#include <stdio.h>
#define pchar char *
typedef char * ppchar;

#define offset(T, a) ((long)(&(((T *)(NULL))->a)))
struct Data {
    int a;
    double b;
    char c;
};

int main() {
    int num1 = 0x616263;//先把16进制的数据换成10进制
    int num2 = 0x61626364;
    //printf("%s\n", (char *)(&num1));//char 会把它们的10进制数对应的ASC码输出
    printf("%s\n", (char *)(&num2));
    printf("%ld\n", offset(struct Data, a));
    printf("%ld\n", offset(struct Data, b));
    printf("%ld\n", offset(struct Data, c));
    pchar p, q;
    ppchar a, b;
    printf("p = %lu, q = %lu\n", sizeof(p), sizeof(q));
    printf("a = %lu, b = %lu\n", sizeof(a), sizeof(b));
    return 0;
}
