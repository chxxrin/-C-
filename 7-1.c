#include <stdio.h>

int main(void) {
    int num, fac;

    printf("*** Factorial Calculation Program ***\n");
    printf("Positive Integer Number? ");
    scanf("%d", &num);

    for(int i=1;i<=num;i++){
        fac *=i;
    }

    printf("%d! = %d\n", num, fac);

    return 0;
}