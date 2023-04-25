#include <stdio.h>

int main(void){
    int num;
    int result;
    printf("Integer Number:");
    scanf("%d", &num);
    result = ~num + 1;
    printf("%d\n", result);
    return 0;
}