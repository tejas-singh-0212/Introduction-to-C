#include <stdio.h>
#include <stdlib.h>
int *arr;
int head = -1;
int capacity;
void createStack(int size) {
    if (size <= 0) {
        printf("Size must be greater than 0!\n");
        exit(1);
    }
    capacity = size;
    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
}
void push(int value) {
    if (head == capacity - 1) {
        int new_capacity = capacity * 2;
        int *temp = (int *)realloc(arr, new_capacity * sizeof(int));
        if (temp == NULL) {
            printf("Stack resize failed! Value not pushed.\n");
            return;
        }
        arr = temp;
        capacity = new_capacity;
    }
    head++;
    arr[head] = value;
}
int pop() {
    if (head == -1) {
        printf("Stack Underflow!\n");
        return -1;
    }
    int value = arr[head];
    head--;
    return value;
}
int top() {
    if (head == -1) {
        printf("Stack is Empty!\n");
        return -1;
    }
    return arr[head];
}

void display() {
    if (head == -1) {
        printf("Stack is Empty!\n");
        return;
    }
    for (int i = head; i >= 0; i--) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int main(){
    int choice, value;
    createStack(2);
    while (1) {
        printf("1. Push\n2. Pop\n3. Top\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                if (head != -1) {
                    printf("Popped value: %d\n", pop());
                }else{
                    printf("Stack is Empty! Cannot pop.\n");
                }
                break;
            case 3:
                if (head != -1) {
                    printf("Top value: %d\n", top());
                }
                else {
                    printf("Stack is Empty! No top element.\n");
                }
                break;
            case 4:
                display();
                break;
            case 5:
                free(arr);
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}