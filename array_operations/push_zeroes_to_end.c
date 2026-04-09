#include<stdio.h>
//push all the zeroes to end of array without changing the relative order of non-zero elements
void swap(int*a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
void main(){
    int size;
    printf("Enter the number of elements of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array:\n");
    //taking array elements as input
    for(int i=0; i<size; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d",arr+i);
    }
    //printing original array
    printf("Original array: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    //pushing zeroes to end
    for(int i=0; i<size-1; i++){
        for(int k=0; k<size-i-1; k++){
            if(arr[k]==0){
                swap(arr+k,arr+k+1);
            }
        }
    }
    //printing modified array
    printf("Modified array: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    return;
}