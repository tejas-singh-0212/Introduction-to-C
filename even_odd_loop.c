#include<stdio.h>
void main()
{
    int n;
    do{
        printf("Enter a number (0 to exit): ");
        scanf("%d", &n);
        if(n != 0){
            if(n % 2 == 0)
                printf("%d is even\n", n);
            else
                printf("%d is odd\n", n);
        }
    } while(n != 0);
}