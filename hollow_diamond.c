#include <stdio.h>
void main() {               //Program to print hollow diamond pattern
    int n, i, j, space;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) 
    {
        for(space = i; space < n; space++) 
        {
            printf(" ");
        }
        for(j = 1; j <= (2*i - 1); j++) 
        {
            if(i == n && j == n) 
            {
                printf("+");
            } 
            else if(j == 1 || j == (2*i - 1)) 
            {
                printf("*");
            } 
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i = n-1; i >= 1; i--) 
    {
        for(space = n; space > i; space--) 
        {
            printf(" ");
        }
        for(j = 1; j <= (2*i - 1); j++) 
        {
            if(j == 1 || j == (2*i - 1)) 
            {
                printf("*");
            } 
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}