#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct MaxStackNode {
    int data;
    int max_so_far;
    struct MaxStackNode* next;
} MaxStackNode;

typedef struct {
    MaxStackNode* top;
} MaxStack;

void init(MaxStack*);
int isEmpty(MaxStack*);
void push(MaxStack*, int);
int pop(MaxStack*);
int getMax(MaxStack*);
int peek(MaxStack*);
void display(MaxStack*);


int main() {
    MaxStack stack;
    init(&stack);
    push(&stack, 5);
    printf("Pushed 5, max: %d\n", getMax(&stack));
    push(&stack, 3);
    printf("Pushed 3, max: %d\n", getMax(&stack));
    push(&stack, 7);
    printf("Pushed 7, max: %d\n", getMax(&stack));
    push(&stack, 2);
    printf("Pushed 2, max: %d\n", getMax(&stack));
    display(&stack);
    printf("Popped: %d\n", pop(&stack));
    printf("Max after pop: %d\n", getMax(&stack));
    printf("Popped: %d\n", pop(&stack));
    printf("Max after pop: %d\n", getMax(&stack));
    display(&stack);
    return 0;
}

void init(MaxStack* stack) {
    stack->top = NULL;
}

int isEmpty(MaxStack* stack) {
    return stack->top == NULL;
}

void push(MaxStack* stack, int value) {
    MaxStackNode* new_node = (MaxStackNode*)malloc(sizeof(MaxStackNode));
    if (!new_node) {
        return;
    }
    
    new_node->data = value;
    new_node->next = stack->top;
    
    if (isEmpty(stack) || value > stack->top->max_so_far) {
        new_node->max_so_far = value;
    } else {
        new_node->max_so_far = stack->top->max_so_far;
    }

    stack->top = new_node;
}

int pop(MaxStack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        return INT_MAX;
    }
    
    MaxStackNode* temp = stack->top;
    int value = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return value;
}

int getMax(MaxStack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return INT_MAX;
    }
    return stack->top->max_so_far;
}

int peek(MaxStack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return INT_MAX;
    }
    return stack->top->data;
}

void display(MaxStack* stack) {
    MaxStackNode* current = stack->top;
    printf("Stack (top to bottom): ");
    while (current) {
        printf("(%d, max=%d) ", current->data, current->max_so_far);
        current = current->next;
    }
    printf("\n");
}