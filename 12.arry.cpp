/*************************************************************************
	> File Name: 12.arry.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 18 May 2020 11:19:37 PM CST
 ************************************************************************/
#include <stdio.h>

void func1(int *a) {
    printf("a = %p\n", a);
    printf("a[0] = %d, *a = %d\n", a[0], *a);
    int *p;
    printf("*p = %p, p + 1 = %p\n", p, p + 1);
    return ;
}

void func2(int (*b)[9][6]) {
    printf("b = %p, b + 1 = %p\n", b, b + 1);
    return ;
}

//arr[0]
//*(arr + 0)
//*arr

int main() {
    int arr[10] ={1, 2, 3};
    char str[10] = {0};
    int arr2[4][9][6];
    printf("arr = %p, arr[0] = %p\n", arr, &arr[0]);
    printf("arr + 1 = %p\n", arr + 1);
    printf("str = %p, str + 1 = %p\n", str, str + 1);
    int n = 0;
    func1(arr);
    printf("arr2 = %p, arr2 + 1 = %p\n", arr2, arr2 + 1);
    func2(arr2);
    printf("n = %d\n", n);
    return 0;
}

