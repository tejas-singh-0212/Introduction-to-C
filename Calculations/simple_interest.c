#include<stdio.h>
void main()
{
    float principal_amount, rate, interest;			//Simple interest
    int time;
    printf("Enter principal amount (in Rs.): ");
    scanf("%f", &principal_amount);
    printf("Enter rate of interest: ");
    scanf("%f",&rate);
    printf("Enter the number of years: ");
    scanf("%d",&time);
    interest=(principal_amount*rate*time)/100.0;
    printf("The simple interest for %.2f for %d years at the rate of %.2f %% per annum is: %.2f Rs.",principal_amount, time, rate, interest);
}