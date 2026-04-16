#include<stdio.h>       //The number of ways to reach the end of a maze path by only going right and down
int maze(int current_row, int current_col, int ending_row, int ending_col){
    int right_ways=0, down_ways=0;
    if(current_row==ending_row && current_col==ending_col){
        return 1;
    }if(current_row==ending_row){
        right_ways += maze(current_row, current_col+1, ending_row, ending_col);
    }if(current_col==ending_col){
        down_ways += maze(current_row+1, current_col, ending_row, ending_col);
    }if(current_row < ending_row && current_col < ending_col){
        right_ways += maze(current_row, current_col+1, ending_row, ending_col);
        down_ways += maze(current_row+1, current_col, ending_row, ending_col);
    }
    return right_ways+down_ways;
}
void main(){
    int rows, columns;
    printf("Enter number of rows of maze: ");
    scanf("%d", &rows);
    printf("Enter number of columns of maze: ");
    scanf("%d", &columns);
    printf("The number of ways to reach the end of a %dx%d maze path is: %d", rows, columns, maze(1,1,rows,columns));
}