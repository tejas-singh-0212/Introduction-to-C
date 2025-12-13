#include<stdio.h>
void palindrome_check(int arr[], int size){
    int i, flag = 1;
    for(i = 0; i < size / 2; i++){
        if(arr[i] != arr[size - i - 1]){
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("The array is a palindrome.\n");
    else
        printf("The array is not a palindrome.\n");
    return;
}
void main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for(int i = 0; i < n; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    palindrome_check(arr, n);
}