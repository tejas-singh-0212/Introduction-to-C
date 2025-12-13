#include<stdio.h>
void reverse(int arr[], int n) {
    for(int i=0, j=n-1; i<j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }return;
}
void main(){
    int n;
    printf("Enter length of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array: \n");
    for(int i=0; i<n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    reverse(arr, n);
    printf("Reversed array: \n");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}