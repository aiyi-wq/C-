/*************************************************************************
	> File Name: 6.program_struct.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 13 Jul 2020 07:38:13 PM CST
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a - b) {
        printf("not equal!\n");
    } else {
        printf("equal!\n");
    }
    if ((a++) && (b++)) {
        printf("true!\n");
    } else {
        printf("false!\n");
    }
    printf("a = %d, b = %d\n", a, b);
    if ((b++) || (a++)) {
        printf("true!\n");
    } else {
        printf("false!\n");
    }
    printf("a = %d, b = %d\n", a, b);
    //统计偶数个数
    int cnt = 0;
    //需要先将定义一个随机种子
    srand(time(0));
    for (int i = 1; i <= 10; ++i) {
        //定义一个随机种子队100以内的数取余
        int val = rand() % 100;
        printf("%d", val);
        (i != 10) && printf(" ");
        // if ((val & 1) == 0) cnt += 1;
        // 替换成下面的代码效率更高
        cnt += !(val & 1);
    }
    printf("\n");
    printf("even value is : %d\n", cnt);
    int digit = 0, n, num;
    scanf("%d", &n);
    num = n;
    do {
        digit++;
        n /= 10;
    } while (n);
    printf("%d has %d digits\n", num, digit);
    return 0;
}
