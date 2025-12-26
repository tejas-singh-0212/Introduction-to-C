#include<stdio.h>
void main()
{
    int row_1,col_1,row_2,col_2;
    printf("Enter number of rows of first matrix: ");
    scanf("%d",&row_1);
    printf("Enter number of columns of first matrix: ");
    scanf("%d",&col_1);
    printf("Enter number of rows of second matrix: ");
    scanf("%d",&row_2);
    printf("Enter number of columns of second matrix: ");
    scanf("%d",&col_2);
    if(col_1==row_2){
        int a[row_1][col_1], b[row_2][col_2];
        //Taking elements of first matrix
        printf("Enter elements of first matrix:\n");
        for(int i=0; i<row_1; i++){
            for(int k=0; k<col_1; k++){
                printf("Element [%d][%d]: ",i,k);
                scanf("%d", &a[i][k]);
            }
        }
        //Taking elements of second matrix
        printf("Enter elements of second matrix:\n");
        for(int i=0; i<row_2; i++){
            for(int k=0; k<col_2; k++){
                printf("Element [%d][%d]: ",i,k);
                scanf("%d", &b[i][k]);
            }
        }
        int product[row_1][col_2];
        //multiplying matrices
        for(int i=0; i<row_1; i++){
            for(int k=0; k<col_2; k++){
                product[i][k]=0;
                for(int l=0; l<col_1; l++){
                    product[i][k] += a[i][l]*b[l][k];
                }
            }
        }
        //displaying product
        printf("The product matrix is:\n");
        for(int i=0; i<row_1; i++){
            for(int k=0; k<col_2; k++){
                printf("%d ",product[i][k]);
            }printf("\n");
        }
    }else{
        printf("Matrices with these rows and columns cannot be multiplied");
    }
}