#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char);
char pop();
char peek();
int getPrecedence(char);
void infixToPostfix(const char*, char*);

int main() {
    char infix[MAX], postfix[MAX];
    printf("Enter infix expression: ");
    fgets(infix, sizeof(infix), stdin);
    infix[strcspn(infix, "\n")] = '\0'; // remove trailing newline
    infixToPostfix(infix, postfix);
    printf("Postfix: %s\n", postfix);
    return 0;
}

void push(char value) {
    if (top < MAX - 1) stack[++top] = value;
}

char pop() {
    return (top >= 0) ? stack[top--] : '\0';
}

char peek() {
    return (top >= 0) ? stack[top] : '\0';
}

// getting precedence of operators
int getPrecedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

// main converter
void infixToPostfix(const char* infix, char* postfix) {
    int i = 0, j = 0;
    while (infix[i] != '\0') {
        char ch = infix[i];
        // skip whitespace
        if (isspace(ch)) { i++; continue; }
        // alphanumeric operands go directly to output
        if (isalnum(ch)) {
            postfix[j++] = ch;
        }
        // ( push to stack
        else if (ch == '(') {
            push(ch);
        }
        // ) pop until matching (
        else if (ch == ')') {
            while (top != -1 && peek() != '(')
            postfix[j++] = pop();
            pop(); // discard (
        }
        // Operators: pop higher/equal precedence first
        else {
            int prec = getPrecedence(ch);
            while (top != -1 && peek() != '(') {
                int topPrec = getPrecedence(peek());
                // pop if higher precedence, or equal and left-associative
                if (topPrec > prec || (topPrec == prec && ch != '^')) {
                    postfix[j++] = pop();
                } else break;
            }
            push(ch);
        } i++;
    }
    // empty remaining operators from stack
    while (top != -1) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0'; // null-terminate result
}