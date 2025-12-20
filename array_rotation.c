#include<stdio.h>
void arr_rev(int arr[], int start, int end){
    int i,j,temp;
    for( i=start, j=end; i<j ; i++ , j-- ){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
void main()
{
    int n, steps;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array:\n");
    for (int i=0; i<n; i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",arr+i);
    }
    printf("\nEnter number of steps the array is to be rotated: ");
    scanf("%d",&steps);
    steps%=n;
    printf("Original array:\n");
    for (int i=0; i<n; i++)
        printf("%d ",arr[i]);
    arr_rev(arr,0,n-1);       //reverse whole array
    arr_rev(arr,0,steps-1);       //reverse starting k elements
    arr_rev(arr,steps,n-1);         //reverse the leftover array
    printf("\nArray after %d rotations:\n",steps);
    for (int i=0; i<n; i++)
        printf("%d ",arr[i]);
}