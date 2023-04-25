#include <stdio.h>

int main(void) {
    int num1, num2;
    int result = 0;

    printf("Input Positive Integer Number 1 :");
    scanf("%d", &num1);
    printf("Input Positive Integer Number 2 : ");
    scanf("%d", &num2);

    if(num1>num2) {
        result = num1-num2;
    } else if(num1<num2) {
        result = num2-num1;
    } else {
        result = 0;
    }
    
    printf("Difference of two numbers: %d\n", result);
    return 0;
}