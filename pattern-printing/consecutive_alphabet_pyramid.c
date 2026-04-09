#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int no_of_star=1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf("  ");
        }for(int k=1;k<=no_of_star;k++){
            printf("%c ",k+64);
        }
        no_of_star += 2;
        printf("\n");
    }
}