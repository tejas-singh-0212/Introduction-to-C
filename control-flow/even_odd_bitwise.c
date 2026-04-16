#include <stdio.h>
void main() 
{
    int num;            //Check even odd using bitwise operator
    printf("Enter a number: ");
    scanf("%d", &num);
    if ((num & 1) == 0) 
    {
        printf("%d is even\n", num);
    } 
    else 
    {
        printf("%d is odd\n", num);
    }
}