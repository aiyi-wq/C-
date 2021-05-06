/*************************************************************************
	> File Name: 18.main.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 21 May 2020 08:45:53 PM CST
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void output(int argc, char *argv[], char *env[]) {
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    for (int i = 0; env[i]; i++) {
        if (strncmp(env[i], "USER=", 5) == 0) {
            if (strncmp(env[i] + 5, "aiyi", sizeof(env[i])) == 0) {
                printf("welcom !\n");
            } else {
                printf("you are not the USER!\n");
                exit(0);
            }
        }
    }
    return ;
}

int main(int argc, char *argv[], char *env[]) {
    output(argc, argv, env);
    return 0;
}
