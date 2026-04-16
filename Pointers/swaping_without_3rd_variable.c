#include<stdio.h>
void main()
{
    int a,b;		//Swaping without third variable
    printf("Enter value of first number: ");
    scanf("%d",&a);
    printf("Enter value of second number: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Values after swaping are\nFirst number: %d \nSecond number: %d",a,b);
}