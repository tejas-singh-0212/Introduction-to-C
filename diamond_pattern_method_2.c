#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int no_of_spaces=n/2, no_of_stars=1;
    if(n%2!=0){
        for(int i=1; i<=n; i++){
        for(int j=1; j<=no_of_spaces; j++){
            printf("  ");
        }
        for(int k=1; k<=no_of_stars; k++){
            printf("* ");
        }
        if(i<=n/2){
            no_of_spaces--;
            no_of_stars+=2;
        }
        else{
            no_of_spaces++;
            no_of_stars-=2;
        }
        printf("\n");
    }
    }else{
        printf("Pattern is not possible for even value of n.\n");
    }
}