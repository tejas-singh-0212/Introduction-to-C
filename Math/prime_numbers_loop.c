#include<stdio.h>
void main()
{
    int n,j,i,count,flag=0;     //Program to print all prime numbers up to N
	printf("Enter the value of N: ");
	scanf("%d",&n);
    printf("The prime numbers are: \n");
    for(j=2;j<=n;j++)
    {    
        count=0;
        for(i=2;i<=j;i++)
        {
            if(j%i==0)
            {
                count++;
            }
        }
        if (count==1)
        {
            printf("%d \n",j);
            flag++;
        }
    }
    printf("Total prime numbers are: %d",flag);
}