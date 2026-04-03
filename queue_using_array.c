#include<stdio.h>
#define SIZE 10
int queue[SIZE];
int front=-1;
int rear=-1;

void enqueue(int value) {
    if ((rear + 1) % SIZE == front) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    queue[rear] = value;
    printf("Enqueued: %d\n", value);
}

int dequeue() {
    if (front == -1) {
        printf("Queue is empty\n");
        return -1;
    }
    int value = queue[front];
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % SIZE;
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
    int i = front;
    while (i != rear) {
        printf("%d, ", queue[i]);
        i = (i + 1) % SIZE;
    }
    printf("%d\n", queue[rear]);
}

int main(){
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