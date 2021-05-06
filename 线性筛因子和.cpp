/*************************************************************************
	> File Name: 线性筛因子和.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 06 Jun 2020 09:22:34 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include<cmath>
#define max_n 1000

int prime[max_n + 5] = {0};
int f[max_n + 5] = {0};//记录因子和
int cnt[max_n + 5] = {0};//记录素数因子的幂次方,q^(n + 1)

void init() {
    for (int i = 2; i <= max_n; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            f[i] = i + 1;
            cnt[i] = i * i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > max_n) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) {
                cnt[prime[j] * i] = cnt[i] * prime[j];
                f[prime[j] * i] = f[i] * (cnt[i] * prime[j] - 1) / (cnt[i]  - 1);
                break;
            } else {
                cnt[prime[j] * i] = prime[j] * prime[j];
                f[prime[j] * i] = f[prime[j]] * f[i];
            }
        }
    }
    return ;
}
int main() {
    init();
    for (int i = 2; i <= 10; i++) {
        printf("f[%d] = %d\n", i, f[i]);
    }
    return 0;
}
