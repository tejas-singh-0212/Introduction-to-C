#include<stdio.h>
void main()
{
    int m,n;
    printf("Enter starting year: ");
    scanf("%d",&m);
    printf("Enter ending year: ");
    scanf("%d",&n);
    printf("Leap years between %d and %d are:\n",m,n);
    for(int yr=m; yr<=n; yr++)
    {
        if((yr%4==0 && yr%100!=0) || (yr%400==0))
            printf("%d\n",yr);
    }
}