#include<stdio.h>
void insertion_sort(int arr[],int n) {
    for(int i=1;i<n;i++) {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Unsorted array: \n");
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    insertion_sort(arr,n);
    printf("Sorted array: \n");
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    return;
}