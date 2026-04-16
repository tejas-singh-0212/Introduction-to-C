#include<stdio.h>
void main()
{
    int num, r_Num = 0, remainder;		//Reverse of a number
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0) 
	{
        remainder = num % 10;         
        r_Num = r_Num * 10 + remainder;  
        num /= 10;
    }
    printf("Reversed number: %d\n", r_Num);
}