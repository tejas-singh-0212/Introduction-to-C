#include<stdio.h>
void main()
{
    int n,i=1,count=0;		//Prime checker
	printf("Enter the number to be checked: ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0){
			count++;
		}
		i++;
	}
	if (count==2)
	{
		printf("%d is prime",n);
	}
	else
	{
		printf("%d is composite",n);
	}
}