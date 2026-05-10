#include <stdio.h>
#define SIZE 10
int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int);
int peek(void);
void display(void);
int dequeue(void);

int main(){
    // Min Priority Queue
    int choice, value;
    while(1) {
        printf("1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                if (front != -1) {
                    printf("Front element: %d\n", peek());
                }else{
                    printf("Queue is empty\n");
                }
                break;
            case 4:
                display();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}

void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue is full.\n");
        return;
    } else if (front == -1){
        front = 0;
        rear = 0;
        queue[rear] = value;
        printf("Enqueued: %d\n", value);
        return;
    }
    // find correct position for priority (smallest)
    int i;
    for (i = rear; i >= front; i--) {
        if (value < queue[i]) {
            queue[i + 1] = queue[i];
        } else {
            break;
        }
    }
    queue[i + 1] = value;
    rear++;
    printf("Enqueued: %d\n", value);
}

int dequeue() {
    if (front == -1) {
        printf("Queue is empty\n");
        return -1;
    }
    int value = queue[front];
    // shift all left
    for (int i = front; i < rear; i++) {
        queue[i] = queue[i + 1];
    }
    rear--;
    if (rear == -1) {
        front = -1;
    } 
    printf("Dequeued: %d\n", value);
    return value;
}

int peek() {
    if (front == -1) {
        return -1;
    }
    return queue[front];
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}