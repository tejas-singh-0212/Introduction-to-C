#include<stdio.h>
void main()
{       //Program to check whether a 3x3 matrix is an identity matrix or not
    int a[3][3];
    printf("Enter elements of 3x3 matrix:\n");      //Input 3x3 matrix elements
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int i,j,flag=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j && a[i][j]!=1)
            {
                flag=1;
                break;
            }
            else if(i!=j && a[i][j]!=0)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("The matrix is an identity matrix.\n");
    }
    else
    {
        printf("The matrix is not an identity matrix.\n");
    }
}