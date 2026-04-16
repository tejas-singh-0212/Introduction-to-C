#include<stdio.h>           //single step, double step and triple stair path
//number of ways to reach nth stair
int stair(int n){
    if(n<=2) return n;
    if(n==3) return 4;
    return stair(n-1)+stair(n-2)+stair(n-3);
}
void main(){
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d",&n);
    printf("Total number of ways to climb by only single, double and triple step is: %d", stair(n));
}