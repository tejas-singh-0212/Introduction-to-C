#include<stdio.h>
void main()
{
    float d;
    printf("Enter amount in Dollar: ");
    scanf("%f", &d);
    float r = d * 80; // Assuming 1 Dollar = 80 Rupees
    printf("Equivalent amount in Rupees: %.2f INR\n", r);
}