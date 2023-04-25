#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int num1, num2;
    int answer, user_answer, count=0, correct=0;

    srand((unsigned)time(NULL));

    printf("** Plus Calculation Test **\n");
    printf("Minus to Exit\n");

    while(1) {
        num1 = rand() % 99 + 1;
        num2 = rand() % 99 + 1;

        printf("%d + %d = ", num1, num2);
        scanf("%d", &user_answer);

        if(user_answer < 0) {
            break;
        }

        answer = num1+num2;

        if(answer == user_answer) {
            correct++;
        }
        count++;
    }
    printf("Score: %d/%d\n", correct, count);
    printf("Your Average Score is %.2f\n", (float)correct/count*100);
}