#include <stdio.h>
int main() {
    int n, i, index;
    printf("\nEnter the length of array: ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("\nError: Array is empty! Nothing to delete.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the index position to delete (0 to %d): ", n - 1);
    scanf("%d", &index);
    if(index < 0 || index >= n) {
        printf("\nInvalid index! Index should be between 0 and %d\n", n - 1);
        return 1;
    }
    for(i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("\nArray after deletion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}