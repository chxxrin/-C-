#include <stdio.h>

int main(void){
    int x;
    int y=0, i=1;

    printf("number?");
    scanf("%d", &x); 

    while (y<=x) 
    {
        y+=i;
        i++; 
    }
    i--;
    y -= i--;
    
    printf("1-%d: %d\n", i, y);
    return 0;
}