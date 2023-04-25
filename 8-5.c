#include <stdio.h>

int main(void) {
    int num;
    int i;

    printf("Enter number: ");
    scanf("%d", &num);

    while (num <= 1) {
        printf("Enter number: ");
        scanf("%d", &num);
    }

    for (i=num;i>=1;i--) {
        if((i % 7 == 0 || i % 9 == 0) && i % 63 != 0) {
            printf("%d ", i);
        } 
    }

    return 0;
}