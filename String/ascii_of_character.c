#include<stdio.h>
void main()
{
    char ch;    //ASCII of given character
    int a;
    printf("Enter the character for ASCII value: ");
    scanf("%c",&ch);
    a=(int)ch;
    printf("The ASCII value of %c is %d",ch,a);
}