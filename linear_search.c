#include<stdio.h>
#include<stdbool.h>
void main()
{
    int n, target;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array:\n");
    for (int i=0; i<n; i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",arr+i);
    }
    printf("Enter element to be searched: ");
    scanf("%d",&target);
    bool flag = false;
    int index = 0;
    for (int i=0; i<n; i++){
        if(arr[i] == target){
            flag = true;
            index=i;
            break;
        }
    }
    if (flag == true){
        printf("%d is present in array and its index is %d.",target, index);
    }else{
        printf("%d is not present in array.",target);
    }
}