#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int wtime, meal, sum;
    int perh = 12800;

    printf("Working Hours: ");
    scanf("%d", &wtime);

    sum = perh * wtime;
    meal = wtime / 4;
    
    if(wtime >= 40) {
        sum = sum + 10000*meal;
        sum = sum + (int)(sum*0.1);
    } else {
        sum = sum + 9000*meal;
        sum = sum + (int)(sum*0.02);
    }
    printf("Total Pay: %d Won\n", sum);
    return 0;
}