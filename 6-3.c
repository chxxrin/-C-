#include <stdio.h>

int main(void){
    int kor, eng, math, total;
    double average;

    printf("Korean Score(integer) : ");
    scanf("%d", &kor);
    printf("English Score(integer) : ");
    scanf("%d", &eng);
    printf("Mathematics Score(integer) : ");
    scanf("%d", &math);

    total = kor+eng+math;
    printf("Your Total Score: %d\n", total);

    average = (double)total/3;
    printf("Average: %.2lf\n", average);


    return 0;
}