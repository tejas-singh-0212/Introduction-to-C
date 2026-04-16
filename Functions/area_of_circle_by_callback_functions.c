#include<stdio.h>
#include<math.h>
#define pi 3.1415
float euclidian_distance(int x_1, int y_1, int x_2, int y_2){
    int a = (y_2-y_1)*(y_2-y_1)+(x_2-x_1)*(x_2-x_1);
    return sqrt(a);
}
// radius is the euclidian distance between (x1,y1) and (x2,y2)
float area_of_circle(int x_1, int y_1, int x_2, int y_2, float (*distance)(int x_1,int y_1, int x_2, int y_2)){
    float radius  = distance(x_1, y_1, x_2, y_2);
    return pi*radius*radius;
}
void main(){
    int x_1, y_1, x_2, y_2;
    float area;
    //for coordinates (x_1,y_1) and (x_2,y_2)
    printf("Enter coordinate x_1: ");
    scanf("%d",&x_1);
    printf("Enter coordinate y_1: ");
    scanf("%d",&y_1);
    printf("Enter coordinate x_2: ");
    scanf("%d",&x_2);
    printf("Enter coordinate y_2: ");
    scanf("%d",&y_2);
    area = area_of_circle(x_1, y_1, x_2, y_2,euclidian_distance);
    printf("The distance between these points is %.2f",area);
}