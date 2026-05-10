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
void infixToPrefix(const char*, char*);

int main() {
    // Infix to Prefix
    char infix[MAX], prefix[MAX];
    printf("Enter infix expression: ");
    fgets(infix, sizeof(infix), stdin);
    infix[strcspn(infix, "\n")] = '\0'; // remove trailing newline
    infixToPrefix(infix, prefix);
    printf("Prefix: %s\n", prefix);
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
void infixToPrefix(const char* infix, char* prefix) {
    int i = strlen(infix) - 1;  // start from end
    int j = 0;
    char temp[MAX];             // temporary buffer

    while (i >= 0) {
        char ch = infix[i];
        if (isspace(ch)) { i--; continue; }
        if (isalnum(ch)) {
            temp[j++] = ch;     // append to temp
        }
        else if (ch == ')') {   // push closing bracket
            push(ch);
        }
        else if (ch == '(') {   // pop until closing bracket
            while (top != -1 && peek() != ')')
                temp[j++] = pop();
            pop(); // discard ')'
        }
        else { // Operator
            int prec = getPrecedence(ch);
            while (top != -1 && peek() != ')') {
                int topPrec = getPrecedence(peek());
                // associativity rule
                if (topPrec > prec || (topPrec == prec && ch == '^')) {
                    temp[j++] = pop();
                } else break;
            } push(ch);
        } i--; 
    }
    while (top != -1)
        temp[j++] = pop();
    temp[j] = '\0';
    // reverse temp to get final prefix
    for (int k = 0; k < j; k++)
        prefix[k] = temp[j - 1 - k];
    prefix[j] = '\0';
}