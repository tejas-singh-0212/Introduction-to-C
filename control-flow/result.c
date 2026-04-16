#include<stdio.h>
void main()
{
    int maths, physics, chemistry, english, computer, total;
    printf("Enter marks obtained in Maths: ");
    scanf("%d", &maths);
    printf("Enter marks obtained in Physics: ");
    scanf("%d", &physics);
    printf("Enter marks obtained in Chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter marks obtained in English: ");
    scanf("%d", &english);
    printf("Enter marks obtained in Computer: ");
    scanf("%d", &computer);
    total = maths + physics + chemistry + english + computer;
    float percent = total/5.0;
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percent);
    if (percent>=33) {
        printf("Result: Pass\n");
    } else {
        printf("Result: Fail\n");
    }
}