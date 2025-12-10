#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int no_of_star=1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }for(int j=1;j<=no_of_star;j++){
            printf("*");
        }
        no_of_star += 2;
        printf("\n");
    }
}