#include<stdio.h>
void main()
{
    int a,b,c;       //Triangle validity
    printf("Enter length of first side: ");
    scanf("%d",&a);
    printf("Enter length of second side: ");
    scanf("%d",&b);
    printf("Enter length of third side: ");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("Triangle is valid");
    }
    else{
        printf("Triangle is invalid");
    }
}