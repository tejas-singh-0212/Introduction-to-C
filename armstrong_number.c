#include<stdio.h>
void main()
{
    int num,remainder,flag=0,o_num;		//Armstrong number
    printf("Enter the number to be checked: ");
    scanf("%d", &num);
    o_num=num;
    while (num != 0) 
	{
        remainder = num % 10;
        flag+=remainder*remainder*remainder;
        num /= 10;
    }
    
	if(flag==o_num)
    {
    	printf("%d is an Armstrong number.",o_num);
	}
	else
	{
		printf("%d isn\'t an Armstrong number.",o_num);
	}
}