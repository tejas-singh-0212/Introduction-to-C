#include<stdio.h>
void main()
{
    int a[3][3];
    printf("Enter elements of 3x3 matrix:\n");      //Take elements of matrix from user
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int choice;
    printf("\n1.Upper Triangular Matrix\n2.Lower Triangular Matrix\nEnter Your choice (1/2):");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            int i,j;
            printf("Upper Triangular Matrix:\n");
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    if(i<=j){
                        printf("%d\t",a[i][j]);
                    } else {
                        printf("0\t");
                    }
                }
                printf("\n");
            }
            break;
        case 2:
            printf("Lower Triangular Matrix:\n");
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    if(i>=j){
                        printf("%d\t",a[i][j]);
                    } else {
                        printf("0\t");
                    }
                }
                printf("\n");
            }
            break;
        default:
            printf("Invalid Choice");
    }
}