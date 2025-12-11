#include<stdio.h>   //Program to calculate the combination nCr
int factorial(int num){
    int i, fact = 1;
    for(i = 1; i <= num; i++){
        fact = fact * i;
    }return fact;
}
void main(){
    int n, r, nCr;
    printf("Enter the values of n: ");
    scanf("%d", &n);
    printf("Enter the values of r: ");
    scanf("%d", &r);
    nCr = factorial(n) / (factorial(r) * factorial(n-r));
    printf("The value of %d_C_%d is: %d\n", n, r, nCr);
}