#include <stdio.h>

int main(void){
    int num1=0;
    int num2=0;

    printf("Enter First Number(integer): ");
    scanf("%d", &num1);
    printf("Enter Second Number(integer) : ");
    scanf("%d", &num2);
    
    printf("%d + %d = %d\n", num1, num2, num1+num2);
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    printf("%d * %d = %d\n", num1, num2, num1*num2);

    return 0;
}