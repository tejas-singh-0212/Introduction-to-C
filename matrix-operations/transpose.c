#include<stdio.h>
void main()
{
    int a[3][3];        //Taking matrix elements as input
    printf("Enter elements of 3x3 matrix:\n");
    for(int i=0;i<3;i++){ 
        for(int j=0;j<3;j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d",&a[i][j]);
        }
    }

    int i,j,b[3][3];
    printf("Original Matrix:\n");       //Printing original matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){           //Calculating transpose
        for(j=0;j<3;j++){
            b[j][i]=a[i][j];
        }
    }

    printf("Transpose of Matrix:\n");       //Printing transposed matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}