#include<stdio.h>   //Program to calculate the combination nCr
void main()
{
    int n, r, nCr, nfact=1, rfact=1, nrfact=1;
    printf("Enter the values of n: ");
    scanf("%d", &n);
    printf("Enter the values of r: ");
    scanf("%d", &r);
    for(int i=1; i<=n; i++){
        nfact=nfact*i;
    }for(int i=1; i<=r; i++){
        rfact=rfact*i;
    }for(int i=1; i<=(n-r); i++){
        nrfact=nrfact*i;
    }
    nCr = nfact / (rfact * nrfact);
    printf("The value of %d_C_%d is: %d\n", n, r, nCr);
}