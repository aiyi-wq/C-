/*************************************************************************
	> File Name: 抽屉原理.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 06 Jun 2020 11:52:55 AM CST
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
#define max_n 10000//上界不会是一个五位数

typedef long long ll;
//判断位数
int digits(ll n) {
    if (n == 0) return 1;
    return floor(log10(n)) + 1;
}
//拼接数字
ll calc(int x) {
    int n = 0;
    ll ans = 0;
    while (digits(ans) < 9) {
        n += 1;
        ans = ans * pow(10, digits(n * x));
        ans += n * x;
    }
    //判断是否为全数字
    if (digits(ans) - 9) return 0;
    int num[10] = {1, 0};
    ll tmp = ans;
    while(tmp) {
        if (num[tmp % 10])  return 0;
        num[tmp % 10] += 1;
        tmp /= 10;
    }
    return ans;
}

int main() {
    ll ans = 0;
    //输出最大的全数字
    for (int i = 100; i < max_n; i++) {
        ll tmp = calc(i);
        ans = (tmp > ans ? tmp : ans);
    }    
    cout << ans << endl;
    return 0;
}
