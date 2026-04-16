#include<stdio.h>
void zig_zag(int n){        //Pre-in-post recursive calls
    if(n==0) return;
    printf("%d ",n);
    zig_zag(n-1);
    printf("%d ",n);
    zig_zag(n-1);
    printf("%d ",n);
    return;
}
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    zig_zag(n);
}