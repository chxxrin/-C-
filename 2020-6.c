//20192120 박채린

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(void){
    int num1, num2, ans;
    int total=0, correct=0;
    double avg;

    printf("*** Plus Test ***\n");
    printf("Enter a negetive value or 0 to exit\n");
    printf("Start Calculation!\n");
    srand((unsigned)time(NULL));

    while(1) {
        num1 = rand()%99+1;
        num2 = rand()%99+1;
        printf("%02d + %02d = ", num1, num2);
        scanf("%d", &ans);
        if(ans <= 0 )
            break;
        total++;
        if(ans == num1+num2)
            correct++;
    } 
    if(total != 0)
        avg = (double)correct/(double)total * 100.0;
    else 
        avg = 0.0;
    printf("Your Score : %d/%d = %.2f\n", correct, total, avg);
    return 0;
}