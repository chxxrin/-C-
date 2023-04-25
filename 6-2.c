#include <stdio.h>

#define PI 3.14

int main(void){
    double rad=0;

    printf("Enter the radius: ");
    scanf("%lf", &rad);
    printf("1. Perimeter of circlee : %10.3lf\n", 2*PI*rad);
    printf("2. Area of circle : %10.3lf\n", PI*rad*rad);
    printf("3. Area of sphere: %10.3lf\n", 4*PI*rad*rad);
    printf("4. Volume of a sphere: %10.3lf\n", 4/3*PI*rad*rad*rad);

    return 0;
}