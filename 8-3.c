#include <stdio.h>

int main(void) {
    int i, j;

    printf("*** Multiplication Table ***\n");

    for(i=1;i<10;i++) { //세로로 같은 단
        for (j=2;j<10;j++) {//가로로 다른 단
        if (j==9) {
            printf("%02d x %02d = %02d ", j, i, j*i);
        } else {
            printf("%02d x %02d = %02d, ", j, i, j*i);
        }
    }
    printf("\n");
    }
    return 0;
}