#include <stdio.h>
void main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i=1; i<=n+1; i++){
        printf("%c ",i+64);
    }for(int i=n; i>=1; i--){
        printf("%c ",i+64);
    }printf("\n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            printf("%c ",j+64);
        }
        for(int j=1; j<=2*i-1; j++){
            printf("  ");
        }for(int j=n-i+1; j>=1; j--){
            printf("%c ",j+64);
        }
        printf("\n");
    }
}