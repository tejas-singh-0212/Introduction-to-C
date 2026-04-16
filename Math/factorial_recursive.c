#include<stdio.h>
int factorial(int n)		//factorial function
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
void main()
{
    int n;						//factorial by function
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("The factorial of %d is %d.",n,factorial(n));
}