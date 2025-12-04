#include<stdio.h>
void main()
{
    float C, F;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);
    F = (C * 9/5) + 32;
    printf("Equivalent temperature in Fahrenheit: %.1f F\n", F);
}