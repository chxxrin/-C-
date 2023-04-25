#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int x, y;

    srand((unsigned)time(NULL));

    printf("x=? ");
    scanf("%d", &x);
    printf("y=? ");
    scanf("%d", &y);
    
    printf("Generate 5 random number between %d and %d\n", x, y);
    
    for (int i=0;i<5;i++){
        printf("%d ", rand() % (y-x+1)+x);
    }
    
    return 0;
}