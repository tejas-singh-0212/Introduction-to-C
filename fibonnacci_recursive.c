#include<stdio.h>       //Program to print fibonacci series using recursion
int fibonacci(int n)		//fibonacci function
{
	if(n<=1)
	{
		return n;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}

void main()
{
    int n,i;			//fibonacci by function
	printf("Enter the number of terms of fibonacci: ");
	scanf("%d",&n);
	printf("First %d terms of fibonacci are: \n",n);
	for (i=0;i<n;i++)
	{
		printf("%d  ", fibonacci(i));
	}
}