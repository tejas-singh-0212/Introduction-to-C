#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    if(n%2!=0){
        int i, j, mid = n / 2;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(i == mid || j == mid){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    else{
        printf("Not possible to print star plus pattern with even number of rows\n");
    }
}