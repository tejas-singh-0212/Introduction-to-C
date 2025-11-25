#include<stdio.h>
void main()
{
    int num, remainder,o_num;		//Digit wise even odd
    printf("Enter an integer: ");
    scanf("%d", &num);
    o_num=num;
    while (num != 0) 
	{
		remainder = num % 10;
		if(remainder%2==0)
		{
			printf("%d is even \n",remainder);
		}
		else
		{
			printf("%d is odd \n",remainder);
		}
	    num /= 10;
	}
}