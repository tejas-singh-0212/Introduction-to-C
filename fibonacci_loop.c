#include<stdio.h>
void main() 
{
    int limit, count = 0;       //Fibonacci series sum limit and term counter
    int a = 0, b = 1, c, sum = 0;
    printf("Enter the sum limit: ");
    scanf("%d", &limit);
    printf("Fibonacci sequence:\n");
    while (sum <= limit) 
    {
        printf("%d", a);
        count++;
        sum += a;
        if (sum > limit) 
        {
            break;
        } 
        else 
        {
            printf(", ");
        }
        c = a + b;
        a = b;
        b = c;
    }    
    printf("\nNumber of terms generated is %d", count);
}