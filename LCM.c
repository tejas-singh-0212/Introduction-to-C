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
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}
void main(){
    int x,y;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
    printf("The LCM (lowest common multiple) of %d and %d is: %d",x,y,lcm(x,y));
}