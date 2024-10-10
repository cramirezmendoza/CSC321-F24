// Camila Ramirez
// csc 321
// lab 6 c

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int x = 7;
    int y = 2;
    double result = 0;  

    result = x + y * x / y - x;
    printf("Your first result using int is %lf \n", result);

    result = -x - y / x * y + x;
    printf("Your second result using int is %lf \n", result);

    result = x + y - x / y;
    printf("Your third result using int is %lf \n", result);

    double a = 7.0;
    double b = 2.0;

    result = a + b * a / b - a;
    printf("Your first result using double is %lf \n", result);

    result = -a - b / a * b + a;
    printf("Your second result using double is %lf \n", result);

    result = a + b - a / b;
    printf("Your third result using double is %lf \n", result);

    return EXIT_SUCCESS;
}

