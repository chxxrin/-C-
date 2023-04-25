#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void){
    int num;
    int a1=0, a2=1;
    int i, a;
    
    printf("*** Fibonacci Sequence Program ***\n");
    printf("How many print Fibonacci Sequence? ");
    scanf("%d", &num);

    if(num>=3){
        printf("%d %d ", a1, a2);
    }
    for (i=3;i<=num;i++){
        a = a1+a2;
        printf("%d ",a);
        a1 = a2;
        a2 = a;
    }
    return 0;
}