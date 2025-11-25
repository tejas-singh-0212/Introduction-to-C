#include<stdio.h>
void main()
{
    int num, remainder,count=0,o_num;		//Digit count
    printf("Enter an integer: ");
    scanf("%d", &num);
    o_num=num;
    while (num != 0) 
	{
		remainder = num % 10;         
	    count++;
	    num /= 10;
	}
	printf("Digit count of %d is %d",o_num,count);
}