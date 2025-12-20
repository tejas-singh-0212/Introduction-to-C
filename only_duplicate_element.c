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
    for(int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                printf("%d is the duplicate element.",arr[i]);
                break;
            }
        }
    }
}