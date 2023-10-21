#include <stdio.h>
#include <stdlib.h>

void Table(float x){
    printf("%.2f X 1 = %.2f\n", x, x * 1);
    printf("%.2f X 2 = %.2f\n", x, x * 2);
    printf("%.2f X 3 = %.2f\n", x, x * 3);
    printf("%.2f X 4 = %.2f\n", x, x * 4);
    printf("%.2f X 5 = %.2f\n", x, x * 5);
    printf("%.2f X 6 = %.2f\n", x, x * 6);
    printf("%.2f X 7 = %.2f\n", x, x * 7);
    printf("%.2f X 8 = %.2f\n", x, x * 8);
    printf("%.2f X 9 = %.2f\n", x, x * 9);
    printf("%.2f X 10 = %.2f\n", x, x * 10);

}

int main()
{
    float number;
    printf("ENTER YOUR NUMBER: ");
    scanf("%f", &number);
    if (number>0){
        Table(number);}
    else{
        printf("ERROR!");
    }


}
