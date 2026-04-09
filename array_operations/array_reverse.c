#include<stdio.h>
void arr_rev(int arr[], int n){     //function to reverse an array
    int i,j,temp;
    for(i=0,j=n-1;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
void main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: \n");
    for(int i=0;i<n;i++){
        printf("Element %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("Original array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nReversed array: \n");
    arr_rev(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}