#include<stdio.h>
void main()
{
    printf("Simple calculator\n");		//Calculator using switch cases
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    char ope;
    printf("Enter the desired operation (+ or - or * or / or %% (modulus)): ");
    scanf(" %c", &ope);
    switch(ope)
    {
    	case '+':
    		printf("%d+%d=%d",a,b,a+b);
    		break;
    	case '-':
    		printf("%d-%d=%d",a,b,a-b);
    		break;
    	case '*':
    		printf("%d*%d=%d",a,b,a*b);
    		break;
    	case '/':
    		if (b!=0.0)
    		{
    			printf("%d / %d = %.2f",a,b,(float)a/b);
			}
			else
			{
				printf("Division by zero is not defined");
			}
    		break;
         case '%':
            if(b != 0) {
                printf("%d %% %d = %d\n", a, b, a%b);
            } else {
                printf("Error: Division by zero is not allowed!\n");
            }
            break;
    	default:
    		printf("Enter a valid input");
	}
}