#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node {
    int data;
    struct Node* next;
} node;

typedef struct {
    node* top;
} Stack;

typedef struct {
    Stack stack1;
    Stack stack2;
} Queue;

void initStack(Stack*);
bool isEmpty(Stack*);
void push(Stack*, int);
int pop(Stack*);
void initQueue(Queue*);
void enqueue(Queue*, int);
int dequeue(Queue*);
int peek(Queue*);
bool isQueueEmpty(Queue*);
void display(Queue*);


int main() {
    Queue q;
    initQueue(&q);
    
    printf("Enqueue 1, 2, 3\n");
    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    display(&q);
    
    printf("\nDequeue: %d\n", dequeue(&q));
    display(&q);
    
    printf("\nEnqueue 4, 5\n");
    enqueue(&q, 4);
    enqueue(&q, 5);
    display(&q);
    
    printf("\nDequeue: %d\n", dequeue(&q));
    printf("Dequeue: %d\n", dequeue(&q));
    display(&q);
    
    printf("\nPeek: %d\n", peek(&q));
    display(&q);
    
    return 0;
}

void initStack(Stack* s) {
    s->top = NULL;
}

bool isEmpty(Stack* s) {
    return s->top == NULL;
}

void push(Stack* s, int value) {
    node* newNode = (node*)malloc(sizeof(node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = s->top;
    s->top = newNode;
}

int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        exit(1);
    }
    node* temp = s->top;
    int value = temp->data;
    s->top = s->top->next;
    free(temp);
    return value;
}

void initQueue(Queue* q) {
    initStack(&q->stack1);
    initStack(&q->stack2);
}

void enqueue(Queue* q, int value) {
    push(&q->stack1, value);
}

int dequeue(Queue* q) {
    if (isEmpty(&q->stack2)) {
        while (!isEmpty(&q->stack1)) {
            push(&q->stack2, pop(&q->stack1));
        }
    }
    if (isEmpty(&q->stack2)) {
        printf("Queue is empty\n");
        exit(1);
    }
    return pop(&q->stack2);
}

int peek(Queue* q) {
    if (isEmpty(&q->stack2)) {
        while (!isEmpty(&q->stack1)) {
            push(&q->stack2, pop(&q->stack1));
        }
    }
    if (isEmpty(&q->stack2)) {
        printf("Queue is empty\n");
        exit(1);
    }
    return q->stack2.top->data;
}

bool isQueueEmpty(Queue* q) {
    return isEmpty(&q->stack1) && isEmpty(&q->stack2);
}

void display(Queue* q) {
    if (isQueueEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue (front to back): ");
    // Display stack2 (front part, in correct order)
    node* current = q->stack2.top;
    node* tempStack = NULL;
    while (current) {
        printf("%d ", current->data);
        current = current->next;
    }
    // Display stack1 (back part, needs to be reversed for display)
    // We need to store elements in a temporary array to reverse them
    int* arr = NULL;
    int count = 0;
    current = q->stack1.top;
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