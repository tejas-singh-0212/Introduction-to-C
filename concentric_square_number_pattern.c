#include<stdio.h>
void main()
{       //Program to print concentric square number pattern
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int size = 2 * n - 1;
    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j <= size; j++)
        {
            int row = (i <= n) ? i : 2 * n - i;
            int col = (j <= n) ? j : 2 * n - j;
            int val = (row < col) ? n - row + 1 : n - col + 1;
            printf("%d ", val);
        }
        printf("\n");
    }
}