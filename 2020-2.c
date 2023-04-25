#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int line, i, j;

    printf("line?");
    scanf("%d", &line);

    for(i=0;i<line;i++){
        for(j=0;j<i;j++)
            printf(" ");
        for(j=i;j<line;j++)
            printf("*");
        printf("\n");
    }   
    return 0;
}