#include<stdio.h>
void swap(int *a,int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
void insertion_sort(int arr[],int n) {
    for(int i=1; i<n; i++) {
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]) {
            swap(arr+j,arr+j-1);
            j--;
        }
    }
    return;
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