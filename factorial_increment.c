#include<stdio.h>
void main()
{
    int i=1,n,fac=1;		//Factorial by increment
	printf("Enter the number whose factorial you want: ");
	scanf("%d",&n);
	while(i<=n)
	{
		fac*=i;
		i++;
	}
	printf("Factorial of %d is %d",n,fac);
}