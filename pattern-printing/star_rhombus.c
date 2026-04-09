#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i+(n-1); j++){
            if(j<=i-1){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
}