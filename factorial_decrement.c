#include<stdio.h>
void main()
{
    int i,n,fac=1;		//Factorial by decrement
	printf("Enter the number whose factorial you want: ");
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
		fac*=i;
		i--;
	}
	printf("Factorial of %d is %d",n,fac);
}