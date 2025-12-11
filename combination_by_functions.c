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
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n-r);
    nCr = nfact / (rfact * nrfact);
    printf("The value of %d_C_%d is: %d\n", n, r, nCr);
}