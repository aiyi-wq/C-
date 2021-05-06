/*************************************************************************
	> File Name: inttypes.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 13 Jul 2020 09:38:06 AM CST
 ************************************************************************/
#include<stdio.h>
#include<inttypes.h>

int main() {
    int64_t a = 256;
    int b = 6;
    //下面两行打印两种整型的内存空间
    printf("sizeof(a) = %lu\n", sizeof(a));
    printf("sizeof(b) = %lu\n", sizeof(b));
    printf("INT8_MIN = %d\n", INT8_MIN);
    printf("INT8_MAX = %d\n", INT8_MAX);
    printf("PRId16 = %s\n", PRId16);
    printf("PRId64 = %s\n", PRId64);
    printf("PRId32 = %s\n", PRId32);
    //在用windows系统编程时，格式占位符不一定是lld，PRId64使用的宏可以避免这个问题
    printf("%" PRId64"\n", a);
    printf("hello" " world" "\n");
    return 0;
}
