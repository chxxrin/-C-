#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //

//입력한 수의 각 자리수의 합을 구하는 프로그램
int main(void){
    int num, digit;
    int sum=0, max=-1, min=10;

    printf("Positive Integer Number: ");
    scanf("%d", &num); //

    do {
        digit = num % 10;
        printf("%d", digit);
        sum += digit;
        if(max < digit)
            max = digit;
        if(min > digit)
            min = digit;
        num = num/10;
        if(num > 0)
            printf("+");
    } while(num>0); //
    printf(" = %d\n", sum);

    return 0;
}