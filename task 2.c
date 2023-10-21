#include <stdio.h>
#include <stdlib.h>


int main()
{
    int myNum;
    printf("TYPE A NUMBER: \n");
    scanf("%d", &myNum);
    int my;
    printf("TYPE A NUMBER: \n");
    scanf("%d", &my);

    if (myNum>5 && my>5){
        printf("%d", myNum+my);
    }
    else if (myNum>5 || my>5) {
            printf("%d", myNum*my);
    }
    else if (myNum<5 && my<5) {
            printf("%d\n", myNum+1);
            printf("%d\n", my+1);
    }
    else{
        printf("HELLO WORLD!");
    }

}


