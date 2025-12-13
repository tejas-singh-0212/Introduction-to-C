#include<stdio.h>
#include<limits.h>
int second_max(int arr[], int n){
    int smax = INT_MIN;
    int max = INT_MIN;
    for (int i = 0; i < n; i++){
        if (arr[i] > max){
            smax = max;
            max = arr[i];
        }else if (arr[i] > smax && arr[i] != max){
            smax = arr[i];
        }
    }
    return smax;
}
void main(){
    int n;
    printf("Enter length of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array: \n");
    for (int i = 0; i < n; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Second largest element in the array is: %d\n", second_max(arr, n));
}