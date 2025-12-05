#include<stdio.h>
void main()
{
    int num, temp, divisor = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;    
    while (temp >= 10) {        // Find the divisor to extract leftmost digit
        temp /= 10;
        divisor *= 10;
    }
    while (divisor > 0) {       // Extract and print each digit
        printf("%d\n", num / divisor);
        num %= divisor;
        divisor /= 10;
    }
}