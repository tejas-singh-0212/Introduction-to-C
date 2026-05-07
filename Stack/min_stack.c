#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct MinStackNode {
    int data;
    int min_so_far;
    struct MinStackNode* next;
} MinStackNode;

typedef struct {
    MinStackNode* top;
} MinStack;

void init(MinStack*);
int isEmpty(MinStack*);
void push(MinStack*, int);
int pop(MinStack* stack);
int getMin(MinStack* stack);
int peek(MinStack* stack);
void display(MinStack* stack);

int main() {
    MinStack stack;
    init(&stack);
    push(&stack, 5);
    printf("Pushed 5, min: %d\n", getMin(&stack));
    push(&stack, 3);
    printf("Pushed 3, min: %d\n", getMin(&stack));
    push(&stack, 7);
    printf("Pushed 7, min: %d\n", getMin(&stack));
    push(&stack, 2);
    printf("Pushed 2, min: %d\n", getMin(&stack));
    display(&stack);
    printf("Popped: %d\n", pop(&stack));
    printf("Min after pop: %d\n", getMin(&stack));
    printf("Popped: %d\n", pop(&stack));
    printf("Min after pop: %d\n", getMin(&stack));
    display(&stack);
    return 0;
}

void init(MinStack* stack) {
    stack->top = NULL;
}

int isEmpty(MinStack* stack) {
    return stack->top == NULL;
}

void push(MinStack* stack, int value) {
    MinStackNode* new_node = (MinStackNode*)malloc(sizeof(MinStackNode));
    if (!new_node) {
        return;
    }
    new_node->data = value;
    new_node->next = stack->top;
    if (isEmpty(stack) || value < stack->top->min_so_far) {
        new_node->min_so_far = value;
    } else {
        new_node->min_so_far = stack->top->min_so_far;
    }
    stack->top = new_node;
}

int pop(MinStack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        return INT_MAX;
    }
    MinStackNode* temp = stack->top;
    int value = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return value;
}

int getMin(MinStack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return INT_MAX;
    }
    return stack->top->min_so_far;
}

int peek(MinStack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return INT_MAX;
    }
    return stack->top->data;
}

void display(MinStack* stack) {
    MinStackNode* current = stack->top;
    printf("Stack (top to bottom): ");
    while (current) {
        printf("(%d, min=%d) ", current->data, current->min_so_far);
        current = current->next;
    }
    printf("\n");
}