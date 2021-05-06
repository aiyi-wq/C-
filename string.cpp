/*************************************************************************
	> File Name: string.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 18 May 2020 01:36:14 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str[10] = {0};
    int n;
    while(~scanf("%d", &n)) {
        sprintf(str, "%X", n);//"%x"为16进制的占位符
        printf("%s has %lu digits\n", str, strlen(str));
    }//%lu无符号整型
    return 0;
}
