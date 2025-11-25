#include<stdio.h>
void main()
{
    int rows, i, j, space, coef;        //Program to print Pascal's triangle
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(i = 0; i < rows; i++) 
    {
        for(space = 1; space <= rows - i; space++) 
        {
            printf("  ");
        }
        coef = 1;
        for(j = 0; j <= i; j++) 
        {
            printf("%4d", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }
}