#include<stdio.h>
void main()
{
    float sp, cp;        //cost price selling price
    printf("Enter selling price:");
    scanf("%f", &sp);
    printf("Enter cost price:");
    scanf("%f", &cp);
    if(sp>cp){
        printf("Profit of %f", sp-cp);
    }
    else if(sp==cp){
        printf("No loss and no profit");
    }
    else{
        printf("Loss of %f", cp-sp);
    }
}