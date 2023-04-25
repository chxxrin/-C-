#include <stdio.h>

int main(void){
    int total = 0;
    int num;
    int i;

    printf("0부터 num까지의 덧셈, num은? ");
    scanf("%d", &num);

    for(i=0;i<num;i++){
        total += i;
    }

    printf("0부터 %d까지의 덧셈 결과 : %d\n", num, total);

    return 0;
}