#include<stdio.h>
void main()
{               //Program to print day of the week based on user input
    int n;
    printf("Enter a number (1-7): ");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
            printf("The day is Sunday\n");
            break;
        case 2:
            printf("The day is Monday\n");
            break;
        case 3:
            printf("The day is Tuesday\n");
            break;
        case 4:
            printf("The day is Wednesday\n");
            break;
        case 5:
            printf("The day is Thursday\n");
            break;
        case 6:
            printf("The day is Friday\n");
            break;
        case 7:
            printf("The day is Saturday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }
}