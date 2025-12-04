#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    if(a > b)
        printf("%d is greater than %d\n", a, b);
    else if(b > a)
        printf("%d is greater than %d\n", b, a);
    else
        printf("Both numbers are equal\n");
}