#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    if(n%2!=0){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j==n-i-1 || j==i){
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }else{
        printf("Star cross pattern is possible only with odd number of rows.\n");
    }
}