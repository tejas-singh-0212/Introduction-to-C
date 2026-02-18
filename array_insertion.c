#include <stdio.h>
int main() {
    int n, i, index, element;
    printf("\nEnter the length of array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the index position (0 to %d): ", n);
    scanf("%d", &index);
    if(index < 0 || index > n) {
        printf("\nInvalid index! Index should be between 0 and %d\n", n);
        return 1;
    }
    for(i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    n++;
    printf("\nArray after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}