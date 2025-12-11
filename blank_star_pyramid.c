#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int no_of_stars = n, no_of_spaces = 1;
    for(int i=1; i<=2*n+1; i++)
    {
        printf("*");
    }
    printf("\n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=no_of_stars; j++)
        {
            printf("*");
        }for(int k=1; k<=no_of_spaces; k++)
        {
            printf(" ");
        }for(int j=1; j<=no_of_stars; j++)
        {
            printf("*");
        }
        printf("\n");
        no_of_stars--;
        no_of_spaces += 2;
    }
}