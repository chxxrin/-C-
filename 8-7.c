#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int num1, num2;
    int answer, user_answer, num_questions, num_correct = 0, i;
    float avg_score;

    srand((unsigned)time(NULL));

    printf("Number of plus calculation test : ");
    scanf("%d", &num_questions);
    
    for(i=0;i<num_questions;i++) {
        num1 = rand()% 99 + 1;
        num2 = rand()% 99 + 1;

        printf("%d + %d = ", num1, num2);
        scanf("%d", &user_answer);

        answer = num1+num2;

        if(user_answer == answer) {
            printf("Right\n");
            num_correct++;
        } else {
            printf("Wrong\n");
        }
    }

    avg_score = ((float)num_correct / num_questions) * 100.0;
    printf("Your Average Score is %.2f\n", avg_score);
    return 0;
}