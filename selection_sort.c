#include<stdio.h>
void selection_sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min_index = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}
void main()
{
    int arr[]={3,5,6,2,8,2,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    for(int i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }
}