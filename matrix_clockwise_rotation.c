#include<stdio.h>
//rotate the matrix 90 degrees clockwise
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
    //rotation can be achieved by first transpose and then reversing each row
    //transpose
    for(int i=0; i<n; i++){
        for(int k=i; k<n; k++){
            int temp = arr[i][k];
            arr[i][k]=arr[k][i];
            arr[k][i]=temp;
        }
    }
    //reversing rows
    for(int i=0; i<n; i++){
        int j=0, k=n-1;
        while(j<k){
            //swap
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
    }
    //printing rotated matrix
    printf("\nRotated Matrix:\n");
    for(int i=0; i<n; i++){
        for(int k=0; k<n; k++){
            printf("%d ",arr[i][k]);
        }printf("\n");
    }
}