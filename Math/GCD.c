#include<stdio.h>
int min(int a, int b) {
    return (a < b) ? a : b;
}
int gcd(int a, int b) {
    for (int i = min(a, b); i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
            break;
        }
    }return 1; // GCD is 1 if no other common divisors found
}
void main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("GCD of %d and %d is: %d\n", a, b, gcd(a, b));
}