/*************************************************************************
	> File Name: my_printf.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 22 May 2020 03:55:46 PM CST
 ************************************************************************/
#include <stdio.h>
#include <stdarg.h>
#include <inttypes.h>

int reverse_num(int num, int *temp) {
    int digit = 0;
    do {
        *temp = *temp * 10 + num % 10;
        num /= 10;
        digit++;
    } while (num);
    return digit;
}

int output_num(int num, int digit) {
    int cnt = 0;
    while (digit--) {
        putchar(num % 10 + '0'), cnt++;
        num /= 10;
    }
	int output_num(int num, int digit) {
    int cnt = 0;
    while (digit--) {
        putchar(num % 10 + '0'), cnt++;
        num /= 10;
    }
    return cnt;
}

int my_printf(const char *frm, ...) {
    int cnt = 0;
    #define PUTC(a) putchar(a), ++cnt
    va_list arg;
    va_start(arg, frm);
    for (int i = 0; frm[i]; i++) {
        switch (frm[i]) {
			case '%': {
                switch (frm[++i]) {
                    case '%': PUTC(frm[i]); break;
                    case 'd': {
                        int xx = va_arg(arg, int);
                        uint32_t x;
                        if (xx < 0) x = -xx, PUTC('-');
                        else x = xx;
                        int num1 = x / 100000, num2 = x % 100000;
                        int temp1 = 0, temp2 = 0;
                        int digit1 = reverse_num(num1, &temp1);
                        int digit2 = reverse_num(num2, &temp2);
                        if (num1) digit2 = 5;
                        else digit1 = 0;
                        cnt += output_num(temp1, digit1);
                        cnt += output_num(temp2, digit2);
                    } break;
                    case 's': {const char *str = va_arg(arg, const char *);
                        for (int i = 0; str[i]; i++) {
                            PUTC(str[i]);
                        }
                    } break;
                }
            } break;
            default: PUTC(frm[i]); break;
        }
    }
    va_end(arg);
    #undef PUTC
    return cnt;
}
int main() {
    int a = -123;
    char str[100] = "I love Haizei";
    printf("hello world\n");
    my_printf("hello world\n");
    printf("int (123) = %d\n", 123);
    my_printf("int (123) = %d\n", 123);
    printf("int (1000) = %d\n", 1000);
    my_printf("int (1000) = %d\n", 1000);
    printf("int (0) = %d\n", 0);
    my_printf("int (0) = %d\n", 0);
    printf("int (a) = %d\n", a);
    my_printf("int (a) = %d\n", a);
    printf("INT32_MAX = %d\n", INT32_MAX);
    my_printf("INT32_MAX = %d\n", INT32_MAX);
    printf("INT32_MIN = %d\n", INT32_MIN);
    my_printf("INT32_MIN = %d\n", INT32_MIN);
    printf("str = %s\n", str);
    my_printf("str = %s\n", str);
    return 0;
}
