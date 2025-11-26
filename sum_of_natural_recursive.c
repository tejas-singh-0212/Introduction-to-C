#include<stdio.h>
int sum_n(int n)			//sum of n natural numbers function
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n+sum_n(n-1);
	}
}
void main()
{
    int n;			//sum of n natural numbers by function
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("The sum of first %d natural numbers is %d.", n,sum_n(n));
}