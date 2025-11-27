#include<stdio.h>
void main()       //Program for menu based triangular and reverse triangular star pattern
{
    int c,n;
    printf("Menu:\n1. Triangular star patterm\n2. Reverse Triangular Star pattern\n");
    printf("Enter your choice (1/2): ");
    scanf("%d",&c);
    if(c==1)
    {
        printf("Enter number of rows: ");
        scanf("%d",&n);
        int i,j;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("* "); 
            }
            printf("\n");
        }
    }
    else if(c==2)
    {
        printf("Enter number of rows: ");
        scanf("%d",&n);
        int i,j;
        for(i=n;i>=1;i--)
        {
            for(j=1;j<=i;j++)
            {
                printf("* "); 
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid Input!!!");
    }
}