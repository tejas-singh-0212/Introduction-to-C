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
    // if queue is empty
    if (front == NULL) {
        front = rear = newNode;
        newNode->next = front;  // Point to itself (circular)
        printf("Enqueued: %d\n", value);
        return;
    }
    // add at the end and make it circular
    newNode->next = front;  // new node points to front
    rear->next = newNode;   // old rear points to new node
    rear = newNode;         // update rear
    printf("Enqueued: %d\n", value);
}

int dequeue() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return -1;
    }
    int value = front->data;
    // if only one node
    if (front == rear) {
        free(front);
        front = rear = NULL;
        return value;
    }
    // more than one node
    node* temp = front;
    front = front->next;
    rear->next = front;  // maintain circular connection
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
    printf("Circular Queue: ");
    node* temp = front;
    // traverse until we come back to front
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != front);
    printf("(back to front)\n");
}