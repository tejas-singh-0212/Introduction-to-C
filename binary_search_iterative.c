#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        }else if (arr[mid] < target) {
            low = mid + 1;
        }else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int size, target, result;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    if (size <= 0) {
        printf("Invalid array size\n");
        return 1;
    }
    int arr[size];
    printf("Enter %d elements in sorted order:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &target);
    result = binarySearch(arr, 0, size - 1, target);
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }
    return 0;
}