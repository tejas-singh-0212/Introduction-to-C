#include<stdio.h>           // Program to print pascals triangle using combination formula
int factorial(int num){     // function to calculate factorial
    int i, fact = 1;
    for(i = 1; i <= num; i++){
        fact = fact * i;
    }return fact;
}
int combination(int n, int r){      // function to calculate combination
    return factorial(n) / (factorial(r) * factorial(n-r));
}
void main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int k = 1; k <= n - i; k++){
            printf("  ");
        }for(int j=0; j<=i; j++){
            printf("%4d", combination(i, j));   // as the term in pascals triangle is given by nCr
        }printf("\n");
    }
}