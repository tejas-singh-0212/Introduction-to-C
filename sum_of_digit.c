#include<stdio.h>
void main()
{
    int num, remainder,sum=0,o_num;		//Sum of digits
    printf("Enter an integer: ");
    scanf("%d", &num);
    o_num=num;
    while (num != 0) 
	{
        remainder = num % 10;         
        sum+=remainder;
        num /= 10;
    }
    printf("Sum of digits of %d is %d",o_num,sum);
}