#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i%2==0){
                printf("%c ",64+j);
            } else {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
}