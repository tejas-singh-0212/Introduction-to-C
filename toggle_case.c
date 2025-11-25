#include<stdio.h>
void main()
{
    char in; //Character Case toggle
	printf("Enter the letter: ");
	scanf("%c", &in);
	int a=(int)in;
	if (a>=65 && a<=90){
		printf("The toggle case of %c is %c",in,(char)(a+32));
	}
	else if(a>=97 && a<=122){
		printf("The toggle case of %c is %c",in,(char)(a-32));
	}
	else{
		printf("Enter a Valid Input!!!");
	}
}