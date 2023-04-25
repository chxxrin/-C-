#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int user_input, user_score=0, computer_score=0, computer_dice=0, user_dice=0,drawCount=0, winCount=0, loseCount=0;
    srand((unsigned)time(NULL));

    while(user_score < 3 && computer_score < 3) {
        printf("1. Throw Dice 0. Give Up(Minus to Exit) : ");
        scanf("%d", &user_input);

        if(user_input == 1) {
            computer_dice = rand()% 6 + 1;
            user_dice = rand()%6 + 1;
            printf("Computer's Dice : %d, Your Dice : %d\n", computer_dice, user_dice);

            if(user_dice > computer_dice){
                user_score++;
                winCount++;
            } else if(user_dice < computer_dice) {
                computer_score++;
                loseCount++;
            } else {
                drawCount++;
            }
        } else if(user_input == 0) {
            computer_dice = rand()%6+1;
            printf("Computer's Dice: %d, Your Dice: 0\n", computer_dice);
            if(computer_dice == 0) {
                drawCount++;
            } else {
                computer_score++;
                loseCount++;
            }
        } else if(user_input < 0) {
           exit(0);
        }
    }

    printf("Win: %d, Lose: %d, Draw: %d\n", winCount, loseCount, drawCount);
    return 0;
}