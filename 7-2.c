#include <stdio.h>

int main(void) {
    int start, end;
    int sum=0;

    printf("Sum Calculating Program\n");
    printf("Start Number: ");
    scanf("%d", &start);
    printf("End Number: ");
    scanf("%d", &end);

    for (int i = start;i<=end;i++){
        sum += i;
    }

    printf("Sum from %d to %d : %d\n", start, end, sum);
    return 0;
}