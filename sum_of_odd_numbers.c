#include<stdio.h>
void main()
{
    int n, sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("Sum of odd numbers up to %d is: %d\n", n, sum);
}