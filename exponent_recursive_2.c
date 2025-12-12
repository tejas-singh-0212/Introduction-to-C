#include<stdio.h>
int powerlog(int base, int exp){         //this one makes less number of calls
    if(exp==0) return 1;
    int a = powerlog(base,exp/2);
    if(exp%2==0) return a*a;
    else return base*a*a;
}
void main(){
    int base, exp;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter exponent: ");
    scanf("%d",&exp);
    printf("%d raised to the power %d is %d",base,exp,powerlog(base,exp));
}