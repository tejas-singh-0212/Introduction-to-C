#include <stdio.h>
#include <ctype.h>

#define MAX 100
int stack[MAX];
int top = -1;

void push(int v) {
    stack[++top] = v;
}
int pop(void) {
    return stack[top--];
}

int evaluatePostfix(char* exp) {
    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == ' ') continue;
        if (isdigit(exp[i])) {
            push(exp[i] - '0'); // convert char to int
        } else {
            int right = pop(), left = pop(); // pop right operand first
            switch (exp[i]) {
                case '+': push(left + right); break;
                case '-': push(left - right); break;
                case '*': push(left * right); break;
                case '/': push(left / right); break;
            }
        }
    }
    return pop(); // Final result
}

// Example usage
int main() {
    char exp[] = "2 3 * 4 +"; // (2*3)+4 = 10
    printf("Result: %d\n", evaluatePostfix(exp));
    return 0;
}