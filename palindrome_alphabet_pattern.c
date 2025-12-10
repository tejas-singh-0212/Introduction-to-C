#include<stdio.h>
void main()
{       //Program to palindrome print alphabet pyramid
    int rows, i, j, k, space;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++) 
    {
        for(space = 1; space <= rows - i; space++) 
        {
            printf("  ");
        }
        for(j = 1; j <= i; j++) 
        {
            printf("%c ", j+64);
        }
        for(k = i - 1; k >= 1; k--) {
             printf("%c ", k+64);
         }
         printf("\n");
    }
}