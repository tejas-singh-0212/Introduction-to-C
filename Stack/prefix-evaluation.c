#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100
int stack[MAX];
int top = -1;

void push(int v) {
    stack[++top] = v;
}
int pop() {
    return stack[top--];
}

int evaluatePrefix(char* exp) {
    int len = strlen(exp);
    for (int i = len - 1; i >= 0; i--) {
        if (exp[i] == ' ') continue;
        if (isdigit(exp[i])) {
            push(exp[i] - '0');
        } else {
            int op1 = pop(), op2 = pop(); // op1 = left, op2 = right
            switch (exp[i]) {
                case '+': push(op1 + op2); break;
                case '-': push(op1 - op2); break;
                case '*': push(op1 * op2); break;
                case '/': push(op1 / op2); break;
            }
        }
    }
    return pop();
}