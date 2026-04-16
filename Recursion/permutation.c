#include<stdio.h>   //Program to calculate the permutation nPr
void main(){
    int n, r, nPr, nfact=1, nrfact=1;
    printf("Enter the values of n: ");
    scanf("%d", &n);
    printf("Enter the values of r: ");
    scanf("%d", &r);
    for(int i=1; i<=n; i++){
        nfact=nfact*i;
    }for(int i=1; i<=(n-r); i++){
        nrfact=nrfact*i;
    }
    nPr = nfact / nrfact;
    printf("The value of %d_P_%d is: %d\n", n, r, nPr);
}