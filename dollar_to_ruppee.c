#include<stdio.h>
void main()
{
    int d;
    printf("Enter amount in Dollar: ");
    scanf("%d", &d);
    int r = d * 80; // Assuming 1 Dollar = 80 Rupees
    printf("Equivalent amount in Rupees: %d INR\n", r);
}