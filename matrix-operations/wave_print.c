#include<stdio.h>
void main(){
    int row, col;
    printf("Enter the number of rows of matrix: ");
    scanf("%d",&row);
    printf("Enter the number of columns of matrix: ");
    scanf("%d",&col);
    int mat[row][col];
    printf("Enter elements of matrix:\n");
    for(int i=0; i<row; i++){
        for(int k=0; k<col; k++){
            printf("Element [%d][%d]: ",i,k);
            scanf("%d",&mat[i][k]);
        }
    }
    //wave print
    for(int i=0; i<row; i++){
        if(i%2==0){
            for(int k=0; k<col; k++){
                printf("%d ",mat[i][k]);
            }
        }
        else{
            for(int k=col-1; k>=0; k--){
                printf("%d ",mat[i][k]);
            }
        }printf("\n");
    }
}