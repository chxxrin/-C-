#include <stdio.h>

int main(void){
    int inch;
    double centimeter;

    printf("Enter inches:");
    scanf("%d", &inch);
    
    centimeter = inch*2.54;
    printf("%d inch is %f cm\n", inch, centimeter);

    return 0;
}