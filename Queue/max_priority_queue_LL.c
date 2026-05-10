#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} node;
node *front = NULL, *rear = NULL;

void enqueue(int);
int dequeue(void);
int peek(void);
void display(void);

int main(){
    // Max priority queue using linked list
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
            value = dequeue();
            if (value != -1) {
                printf("Dequeued value: %d\n", value);
            }
            break;
            case 3:
            value = peek();
            if (value != -1) {
                printf("Front value: %d\n", value);
            }
            break;
            case 4:
            display();
            break;
            case 5:
            exit(0);
            default:
            printf("Invalid choice, please try again.\n");
        }
    }
}

void enqueue(int value) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = value;
    newNode->next = NULL;
    // if queue empty
    if (rear == NULL) {
        front = rear = newNode;
        return;
    }
    // if new value is greater than front
    if (value > front->data) {
        newNode->next = front;
        front = newNode;
        return;
    }
    // find correct position to insert
    node* current = front;
    while (current->next != NULL && current->next->data >= value) {
        current = current->next;
    }
    // insert at correct position
    newNode->next = current->next;
    current->next = newNode;
    if (newNode->next == NULL) {
        rear = newNode;
    }
    return;
}

int dequeue() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return -1;
    }
    node* temp = front;
    int value = temp->data;
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    }
    free(temp);
    return value;
}

int peek() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return -1;
    }
    return front->data;
}

void display() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    node* temp = front;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf(" NULL");
    printf("\n");
}