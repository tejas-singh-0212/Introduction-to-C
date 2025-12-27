#include<stdio.h>
//selection sort algorithm, though its unstable
//select the smallest element from unsorted array and swap it with the first element of unsorted array
void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min_index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}

void main(){
    int n; //size of array
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    //printing unsorted array
    printf("Unsorted array: \n");
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    selection_sort(arr,n); //sorting
    //printing sorted array
    printf("Sorted array: \n");
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
}