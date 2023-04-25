#include <stdio.h>

int main(void) {
    int i, j;
    int line = 5;

    for(i=1;i<=line;i++) {
        for(j=1;j<i;j++) 
            printf(" ");
        for(j=i;j<=line;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}