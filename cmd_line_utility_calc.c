/*
create a command line utility to add/subtract/divide/multiply two numbers,
where first command line argument of your c program must be the operation, next arguments being the two numbers.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    char * operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);       // atoi converts an integer from string given the string is numbers
    num2 = atoi(argv[3]);
    if(strcmp(operation, "add")==0){
        printf("%d", num1 + num2);
    }else if(strcmp(operation, "subtract")==0){
        printf("%d", num1 - num2);
    }else if(strcmp(operation, "multiply")==0){
        printf("%d", num1 * num2);
    }else if(strcmp(operation, "divide")==0){
        printf("%d", num1 / num2);
    }
    return 0;
}