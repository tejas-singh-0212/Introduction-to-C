#include<stdio.h>
void tower_of_hanoi(int n, char source, char helper, char destination){
    if(n==0) return;
    tower_of_hanoi(n-1, source, destination, helper);
    printf("Move disk %d from rod %c to rod %c\n", n, source, destination);
    tower_of_hanoi(n-1, helper, source, destination);
    return;
}
void main(){
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    tower_of_hanoi(n, 'A', 'B', 'C');
}