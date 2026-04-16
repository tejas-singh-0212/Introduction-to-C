#include<stdio.h>
void main()
{
    int a,b,c;       //Checking triangle validity by nested conditionals
    printf("Enter length of first side: ");
    scanf("%d",&a);
    printf("Enter length of second side: ");
    scanf("%d",&b);
    printf("Enter length of third side: ");
    scanf("%d",&c);
    if((a+b)>c){
        if((b+c)>a){
            if((a+c)>b){
                printf("Triangle is valid");
            }
            else{
                printf("Triangle is invalid");
            }
        }
        else{
            printf("Triangle is invalid");
        }
    }
    else{
            printf("Triangle is invalid");
    }
}