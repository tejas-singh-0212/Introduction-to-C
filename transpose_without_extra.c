#include<stdio.h>
void main(){
    int n;
    printf("Enter order of square matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the elements of matrix:\n");
    //taking elements from user
    for(int i=0; i<n; i++){
        for(int k=0; k<n; k++){
            printf("Element [%d][%d]: ",i,k);
            scanf("%d",&arr[i][k]);
        }
    }
    //transpose
    for(int i=0; i<n; i++){
        for(int k=i; k<n; k++){
            int temp = arr[i][k];
            arr[i][k]=arr[k][i];
            arr[k][i]=temp;
        }
    }
    //printing transposed matrix
    for(int i=0; i<n; i++){
        for(int k=0; k<n; k++){
            printf("%d ",arr[i][k]);
        }printf("\n");
    }
}