#include<stdio.h>
#include<math.h>
void main()
{
    float principal_amount, rate, interest, alpha;		//Compound interest
    int time;
    printf("Enter principal amount (in Rs.): ");
    scanf("%f", &principal_amount);
    printf("Enter rate of interest: ");
    scanf("%f",&rate);
    printf("Enter the number of years: ");
    scanf("%d",&time);
    alpha=pow((1+(rate/100.0)),time);
    interest=principal_amount*(alpha-1);
    printf("The compound interest for %.2f for %d years at the rate of %.2f %% per annum is: %.2f Rs.",principal_amount, time, rate, interest);
}