#include<stdio.h>           //single step, double step stair path
//number of ways to reach nth stair
int stair(int n){
    if(n<=2) return n;
    return stair(n-1)+stair(n-2);
}
void main(){
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d",&n);
    printf("Total number of ways to climb by only single and double step is: %d", stair(n));
}