#include<stdio.h>   //Program to calculate the combination nCr
int factorial(int num){
    int i, fact = 1;
    for(i = 1; i <= num; i++){
        fact = fact * i;
    }return fact;
}
void main(){
    int n, r, nPr;
    printf("Enter the values of n: ");
    scanf("%d", &n);
    printf("Enter the values of r: ");
    scanf("%d", &r);
    nPr = factorial(n) / factorial(n-r);
    printf("The value of %d_P_%d is: %d\n", n, r, nPr);
}