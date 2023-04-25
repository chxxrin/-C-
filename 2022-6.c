#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int menu, coin;
    int count=0, win=0;
    double result;
    
    srand((unsigned)time(NULL));

    printf("*** Coin Selection Game ***\n");
    while(1) {
        coin = rand()% 2 + 1 ;
        printf("Computer: I threw a coin and grabbed it.\n");
        do {
            printf("1. Front 2. Back 0. Exit, Your Select: ");
            scanf("%d", &menu);
        } while (menu < 0 || menu > 2);
        if (menu == 0) 
            break;
        if (coin == menu) {
            printf("Right!\n");
            win++;
        } else {
            printf("Wrong\n");
        }
        count++;

    }
    printf("\nNumber of Total Game: %d\n", count);
    printf("Number of Right: %d\n", win);
    if(count == 0) {
        result = 0.0;
    } else {
        result = (double)win/count*100;
    }
    printf("Your Right Rate: %.2f%%\n", result);
   
    return 0;
}