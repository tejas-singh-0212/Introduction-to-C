#include<stdio.h>
void main()
{
    int m, n;
    printf("Enter lower limit: ");
    scanf("%d", &m);
    printf("Enter upper limit: ");
    scanf("%d", &n);
    printf("Prime numbers between %d and %d are:\n", m, n);
    for(int i = m; i <= n; i++)
    {
        int is_prime = 1;
        if(i < 2) {
            is_prime = 0; // 0 and 1 are not prime numbers
        }
        for(int j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if(is_prime)
            printf("%d, ", i);
    }
    printf("\n");
}