#include <stdio.h>
int recursiveBinarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;
    }
    int mid = left + (right - left) / 2;
    if (arr[mid] == target) {
        return mid;
    }else if (arr[mid] < target) {
        return recursiveBinarySearch(arr, mid + 1, right, target);
    }else {
        return recursiveBinarySearch(arr, left, mid - 1, target);
    }
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
    result = recursiveBinarySearch(arr, 0, size - 1, target);
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }
    return 0;
}