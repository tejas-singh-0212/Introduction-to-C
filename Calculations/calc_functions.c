#include<stdio.h>
void add(float x, float y)      // function of calculator
{
	printf("Sum is %.2f\n",x+y);
}
void sub(float x, float y)
{
	printf("Differece is %.2f\n",x-y);
}
void product(float x, float y)
{
	printf("Product is is %.2f\n",x*y);
}
void division(float x, float y)
{
	if(y==0)
	{
		printf("Division by zero error\n");
	}
	else
	{
		printf("Quotient is %.2f\n",x/y);
	}
	
}
int menu()      //Menu for calculator
{
	int choice;
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
	printf("Enter your choice (1/2/3/4/5): ");
	scanf("%d",&choice);
	return choice;
}
void main()
{
    int c;          //Calculator using functions and switch-case
	float a,b;
	do{
		printf("Enter first number: ");
		scanf("%f",&a);
		printf("Enter second number: ");
		scanf("%f",&b);
		c=menu();
		switch(c)
		{
			case 1:
				add(a,b);
				break;
			case 2:
				sub(a,b);
				break;
			case 3:
				product(a,b);
				break;
			case 4:
				division(a,b);
				break;
			case 5:
				printf("Exiting the Program\n");
				break;
			default:
				printf("Invalid Input!!!\n");
		}
	}while(c!=5);
}