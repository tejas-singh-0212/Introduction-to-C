#include<stdio.h>
void main()
{	//Adding two matrices
	int a[3][3];
    printf("Enter elements of 3x3 matrix:\n");      //Input 3x3 matrix elements
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

	int b[3][3];
    printf("Enter elements of 3x3 matrix:\n");      //Input 3x3 matrix elements
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
	int add[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			add[i][j]=a[i][j]+b[i][j];
		}	
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",add[i][j]);
		}
		printf("\n");
	}
}