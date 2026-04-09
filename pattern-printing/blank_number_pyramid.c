#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int no_of_stars = n, no_of_spaces = 1;
    for(int i=1; i<=2*n+1; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    for(int i=1; i<=n; i++){
        int a=1;
        for(int j=1; j<=no_of_stars; j++)
        {
            printf("%d ",j);
            a++;
        }for(int k=1; k<=no_of_spaces; k++)
        {
            printf("  ");
            a++;
        }for(int j=1; j<=no_of_stars; j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
        no_of_stars--;
        no_of_spaces += 2;
    }
}