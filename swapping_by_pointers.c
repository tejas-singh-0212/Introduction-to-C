#include<stdio.h>
void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Before swapping a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping a=%d b=%d\n",a,b);
}