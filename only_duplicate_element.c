#include<stdio.h>
//all elements are present only once, except one, find that
void main(){
    int n;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array:\n");
    for (int i=0; i<n; i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",arr+i);
    }
    int arr_sum=0,ideal_sum=0;
    for (int i=0; i<n; i++){
        arr_sum+=arr[i];
        ideal_sum+=i;
    }
    printf("The duplicate element is %d.",arr_sum-ideal_sum);
}