#include<stdio.h>

void swap(int *a, int *b){
    // function to swap
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[low]; // first element as pivot
    int i = low+1;
    int j = high;
    while(i<=j){
        while(i<=high && arr[i] <= pivot){
            i++;
        }while(j >low && arr[j] > pivot){
            j--;
        }if(i<j){
            swap(arr+i, arr+j);
        }
    }
    swap(arr+low, arr+j);
    return j;
}
void quickSort(int arr[], int low, int high){
    // recursive quick sort function
    if(low < high){
        int p = partition(arr, low, high);
        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
    }
}

void printArray(int arr[], int size){
    // function to print array
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    printArray(arr, n);
    quickSort(arr, 0, n-1);
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}