#include<stdio.h>
#include<string.h>

char stack[100];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

int isEmpty() {
    return top == -1;
}

int isBalanced(char str[]) {
    for (int i = 0; str[i]; i++) {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            push(str[i]);
        } else if (str[i] == ')' || str[i] == '}' || str[i] == ']') {
            if (isEmpty()) return 0;
            char c = pop();
            if ((str[i] == ')' && c != '(') || (str[i] == '}' && c != '{') || (str[i] == ']' && c != '[')) {
                return 0;
            }
        }
    }
    return isEmpty();
}

int main(){
    char input[20];
    printf("Enter the parenthesis string: ");
    scanf("%s", input);
    if (isBalanced(input)) printf("Parenthesis are balanced\n");
    else printf("Parenthesis are not balanced\n");
    return 0;
}