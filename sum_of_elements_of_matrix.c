#include<stdio.h>
void main()
{
    int a[3][3];
    printf("Enter elements of 3x3 matrix:\n");      //Input 3x3 matrix elements
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int sum=0,i,j;
    for(i=0;i<3;i++){           //Calculate sum of all elements
        for(j=0;j<3;j++){
            sum=sum+a[i][j];
        }
    }
    printf("Sum of all elements: %d\n", sum);
}