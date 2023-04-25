#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num, i;
    double total=0.0;

    printf("Positive Integer Number: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++){
        total = total + 1.0/(double)i;
    }

    printf("Formula Result = %.5f\n", total);
    
    return 0;
}