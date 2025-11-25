#include<stdio.h>
#include<ctype.h>
void main()
{
    char ch, lch;		//Letter to lowercase
    printf("Enter the character: ");
    scanf("%c",&ch);
    lch=tolower(ch);
    printf("The lower case of %c is %c", ch, lch);
}