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
    printf("\n");
    //spiral print
    int min_row=0, max_row=row-1, min_col=0, max_col=col-1, total_element=row*col, count=0;
    while(count<=total_element){
        //print min_row
        for(int i=min_col; i<=max_col; i++){
            printf("%d ",mat[min_row][i]);
            count++;
        }min_row++;
        if(count>=total_element) break;
        //print max_col
        for(int i=min_row; i<=max_row; i++){
            printf("%d ",mat[i][max_col]);
            count++;
        }max_col--;
        if(count>=total_element) break;
        //print max_row
        for(int i=max_col; i>=min_col; i--){
            printf("%d ",mat[max_row][i]);
            count++;
        }max_row--;
        if(count>=total_element) break;
        //print min_col
        for(int i=max_row; i>=min_row; i--){
            printf("%d ",mat[i][min_col]);
            count++;
        }min_col++;
        if(count>=total_element) break;
    }
}