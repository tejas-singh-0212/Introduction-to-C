#include<stdio.h>
void main()
{
    int num, remainder,prod=1,o_num;		//Product of digits
    printf("Enter an integer: ");
    scanf("%d", &num);
    o_num=num;
    while (num != 0) 
	{
        remainder = num % 10;         
        prod*=remainder;
        num /= 10;
    }
    printf("Product of digits of %d is %d",o_num,prod);
}