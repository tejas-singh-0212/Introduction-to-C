#include<stdio.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
//Finding the nth smallest element in array
void main(){
    int size;
    printf("Enter number of elements of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter elements of array:\n");
    //taking array elements as input
    for (int i=0;i<size;i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    //printing original array
    printf("Original array: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }printf("\n\n");
    int n;
    printf("\nEnter the value of n for nth smallest element: ");
    scanf("%d",&n);

    //swapping in descending order so that nth smallest will at be [size-n] index
    if(n>=0 && n<size){
        for(int i=0; i<n; i++){
            for(int k=0; k<size-i-1; k++){
                if(arr[k] < arr[k+1]){
                    swap(arr+k, arr+k+1);
                }
            }
        }
        printf("%d th smallest element is %d", n, arr[size-n]);
    }else   printf("Invalid value of n");
    return;
}