#include<stdio.h>
void main()
{
    int i, lower, upper, sum=0;   //Sum of numbers between two limits
    printf("Enter lower limit: ");
    scanf("%d",&lower);
    printf("Enter upper limit: ");
    scanf("%d",&upper);
    for(i=lower;i<=upper;i++)
    {
        sum=sum+i;
    }
    printf("Sum of numbers between %d and %d is: %d\n", lower, upper, sum);
}