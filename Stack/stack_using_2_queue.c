#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node {
    int data;
    struct Node* next;
} node;

typedef struct {
    node* front;
    node* rear;
} Queue;

typedef struct {
    Queue q1;
    Queue q2;
} Stack;

void initQueue(Queue*);
bool isEmpty(Queue*);
void enqueue(Queue*, int);
int dequeue(Queue*);
int peek(Queue*);
void initStack(Stack*);
void push(Stack*, int);
int pop(Stack*);
int top(Stack*);
bool isStackEmpty(Stack*);
void display(Stack* s);

int main() {
    Stack s;
    initStack(&s);
    
    printf("Push 1, 2, 3\n");
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    display(&s);
    
    printf("\nTop: %d\n", top(&s));
    
    printf("\nPop: %d\n", pop(&s));
    display(&s);
    
    printf("\nPush 4, 5\n");
    push(&s, 4);
    push(&s, 5);
    display(&s);
    
    printf("\nPop: %d\n", pop(&s));
    printf("Pop: %d\n", pop(&s));
    display(&s);
    
    printf("\nTop: %d\n", top(&s));
    display(&s);
    
    return 0;
}

void initQueue(Queue* q) {
    q->front = q->rear = NULL;
}

bool isEmpty(Queue* q) {
    return q->front == NULL;
}

void enqueue(Queue* q, int value) {
    node* newNode = (node*)malloc(sizeof(node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    
    if (isEmpty(q)) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

int dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue underflow\n");
        exit(1);
    }
    node* temp = q->front;
    int value = temp->data;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    free(temp);
    return value;
}

int peek(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        exit(1);
    }
    return q->front->data;
}

void initStack(Stack* s) {
    initQueue(&s->q1);
    initQueue(&s->q2);
}

void push(Stack* s, int value) {
    enqueue(&s->q1, value);
}

int pop(Stack* s) {
    if (isEmpty(&s->q1)) {
        printf("Stack is empty\n");
        exit(1);
    }
    
    // Transfer all but last element from q1 to q2
    while (!isEmpty(&s->q1)) {
        int val = dequeue(&s->q1);
        if (isEmpty(&s->q1)) {
            // This is the last element, return it
            // Swap q1 and q2 for next operations
            Queue temp = s->q1;
            s->q1 = s->q2;
            s->q2 = temp;
            return val;
        } else {
            enqueue(&s->q2, val);
        }
    }
    return 0; // Should never reach here
}

int top(Stack* s) {
    if (isEmpty(&s->q1)) {
        printf("Stack is empty\n");
        exit(1);
    }
    
    // Transfer all but last element from q1 to q2
    while (!isEmpty(&s->q1)) {
        int val = dequeue(&s->q1);
        enqueue(&s->q2, val);
        if (isEmpty(&s->q1)) {
            // This is the last element, return it but we need to push it to q2 too
            // We'll get it after transfer
            Queue temp = s->q1;
            s->q1 = s->q2;
            s->q2 = temp;
            return val;
        }
    }
    return 0; // Should never reach here
}

bool isStackEmpty(Stack* s) {
    return isEmpty(&s->q1);
}

void display(Stack* s) {
    if (isStackEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack (top to bottom): ");
    
    // Display q1 in reverse order (top element first)
    node* current = s->q1.front;
    int* arr = NULL;
    int count = 0;
    while (current) {
        arr = (int*)realloc(arr, (count + 1) * sizeof(int));
        arr[count++] = current->data;
        current = current->next;
    }
    
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    free(arr);
    printf("\n");
}