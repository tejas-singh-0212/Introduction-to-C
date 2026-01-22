#include<stdio.h>
//Basic Calculator using pointers and switch case
float add(float *a, float *b){
	// Addition function
	printf("%.2f + %.2f = %.2f",*a,*b, (*a+*b));
}

float difference(float *a, float *b){
	// Subtraction function
	printf("%.2f - %.2f = %.2f", *a,*b,(*a-*b));
}

float product(float *a, float *b){
	// Multiplication function
	printf("%.2f x %.2f = %.2f", *a,*b,(*a * *b));
}

float divide(float *a, float *b){
	// Division function including zero division error handling
	if (*b!=0) printf("%.2f / %.2f = %.2f", *a,*b,*a/ *b);
	else{
		printf("Division by zero is not defined");
	}
}

void main(){
	float x, y;
	char choice;
	printf("~~~~~~CALCULATOR~~~~~~\n");
	printf("Enter first number: ");
	scanf("%f",&x);
	float *p1 = &x;
	printf("Enter operator (+ or - or * or /): ");
	scanf(" %c",&choice);
	printf("Enter second number: ");
	scanf("%f",&y);
	float *p2 = &y;
	switch(choice){
		case '+':
			add(p1, p2);
			break;
		case '-':
			difference(p1, p1);
			break;
		case '*':
			product(p1, p2);
			break;
		case '/':
			divide(p1, p2);
			break;
		default:
			printf("Invalid Input");
	}
}