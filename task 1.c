#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myNum;
    printf("TYPE A NUMBER: \n");
    scanf("%d", &myNum);
    if (myNum%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
