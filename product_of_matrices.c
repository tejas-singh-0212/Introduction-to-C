#include<stdio.h>
void main()
{
    int a[3][3];                        //mat_1[m][n]
    printf("Enter elements of 3x3 matrix:\n");      //Input 3x3 matrix elements
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    int b[3][3];                        //mat_2[n][p]
    printf("Enter elements of 3x3 matrix:\n");      //Input 3x3 matrix elements
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }      

    int prod[3][3]={{0,0,0},{0,0,0},{0,0,0}};       //prod[m,p]
    int i,j,k;
    for(i=0;i<3;i++){       //i<m
        for(j=0;j<3;j++){       //i<p
            for(k=0;k<3;k++){       //k<n
                prod[i][j]+=mat_1[j][k]*mat_2[k][j];
            }
            printf("%d\t",prod[i][j]);
        }
        printf("\n");
    }
}