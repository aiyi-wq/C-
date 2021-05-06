/*************************************************************************
	> File Name: ip.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 19 May 2020 07:19:13 PM CST
 ************************************************************************/
#include <stdio.h>

union IP {
    struct {
        unsigned char a1;
        unsigned char a2;
        unsigned char a3;
        unsigned char a4;
    }ip;
    unsigned int num;
};

int is_little() {
    static int num = 1;
    return ((char *)&num)[0];//转换成字符串类型的首地址
}

int main() {
    printf("%d\n", is_little());
    union IP p;
    char str[100];
    int arr[4];
    while (~scanf("%s", str)) {//读入地址192.168.0.1
        sscanf(str, "%d.%d.%d.%d", arr, arr + 1, arr + 2, arr + 3);
        p.ip.a1 = arr[0];
        p.ip.a2 = arr[1];
        p.ip.a3 = arr[2];
        p.ip.a4 = arr[3];
        printf("%d\n", p.num);// %u 是unsigned int 型的输入输出符
    }
    return 0;
}
