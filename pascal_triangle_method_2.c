#include<stdio.h>           // Program to print pascal's triangle
void main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Pascal's Triangle:\n");
    for(int i=0; i<n; i++){
        for(int k = 1; k <= n - i; k++) {
            printf("  ");
        }int first = 1;
        for(int j=0; j<=i; j++){
            printf("%4d", first);
            first = first * (i-j) / (j+1);   // i_C_(j+1) = i_C_j * (i-j) / (j+1) cuz nC(r+1) = nCr * (n-r) / (r+1)
        }printf("\n");
    }
}