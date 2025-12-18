#include<stdio.h>       //Fibonacci series upto n elements
void main()
{
    int n, a = 0, b=1, sum=0;
    printf("Enter how many elements of the fibonacci you want: ");
    scanf("%d", &n);
    printf("Fibonacci sequence upto %d elements:\n",n);
    printf("%d\t%d\t",a,b);
    for(int i=1; i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d\t", sum);
    }
}