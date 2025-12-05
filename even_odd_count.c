#include<stdio.h>
void main()
{
    int n, even=0, odd=0;
    do{
        printf("Enter a number (0 to exit): ");
        scanf("%d", &n);
        if(n != 0){
            if(n % 2 == 0)
                even++;
            else
                odd++;
        }else{
            printf("Total even numbers: %d\n", even);
            printf("Total odd numbers: %d\n", odd);
            printf("Exiting the program.\n");
        }
    } while(n != 0);
}