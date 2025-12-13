#include<stdio.h>       //The number of ways to reach the end of a maze path by only going right and down
int maze(int ending_row, int ending_col){
    int right_ways=0, down_ways=0;
    if(ending_row==1 || ending_col==1){
        return 1;
    }if(ending_row==1){     //can't go down
        right_ways += maze(ending_row, ending_col-1);
    }if(ending_col==1){     //can't go right
        down_ways += maze(ending_row-1, ending_col);
    }if(ending_row>1 && ending_col>1){
        right_ways += maze(ending_row, ending_col-1);
        down_ways += maze(ending_row-1, ending_col);
    }
    return right_ways+down_ways;
}
void main(){
    int rows, columns;
    printf("Enter number of rows of maze: ");
    scanf("%d", &rows);
    printf("Enter number of columns of maze: ");
    scanf("%d", &columns);
    printf("The number of ways to reach the end of a %dx%d maze path is: %d", rows, columns, maze(rows,columns));
}