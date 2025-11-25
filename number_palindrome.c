#include<stdio.h>
void main()
{
    int num, r_Num = 0, remainder,o_num;		//Palindrome checker
    printf("Enter an integer: ");
    scanf("%d", &num);
    o_num=num;
    while (num != 0) 
	{
        remainder = num % 10;         
        r_Num = r_Num * 10 + remainder;  
        num /= 10;
    }
    if(r_Num==o_num)
	{
    	printf("%d is a palindrome",o_num);
	}
	else
	{
		printf("%d is not a palindrome",o_num);
	}
}