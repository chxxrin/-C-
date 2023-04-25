#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int i;
    int sum = 0;

    i=1;
    while(i<=100){
        sum +=i;
        i++;
    }
    printf("1~100의 합 = %d", sum);
    return 0;
}