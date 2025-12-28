#include<stdio.h>
#include<stdbool.h>
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
void bubble_sort(int arr[],int n) {
    for(int i=0; i<n-1; i++) {
        bool flag = true;
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
    }
}
//given an array of digits, find the minimum possible sum of two numbers formed from digits of the array.
void main(){
    int size;
    printf("Enter number of elements of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter elements of array (digits only):\n");
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
    //step_1 -> sort the array
    bubble_sort(arr, size); //array sorted, i.e, smallest number
    int smallest = 0;
    for(int i=0; i<size; i++){
        smallest = smallest * 10 +arr[i];
    }
    printf("Smallest number: %d\n",smallest);
    //for second smallest number, swap last two digits and array is already sorted
    //though we will have to check if the last digits are same
    for(int i=size-1; i>=0; i--){
        if(arr[i]!=arr[i-1]){
            swap(arr+i, arr+i-1);
            break;
        }
    }
    int second_smallest = 0;
    for(int i=0; i<size; i++){
        second_smallest = second_smallest * 10 +arr[i];
    }
    printf("Second smallest number: %d\n",second_smallest);
    int total_sum = smallest + second_smallest;
    printf("Required sum is: %d",total_sum);
}