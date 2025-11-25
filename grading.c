#include<stdio.h>
void main()
{
    float c, de, cad, ep, maths, avg;       //Program for grading system based on average marks of 5 subjects
    printf("Enter marks for subjects (0-100): \n");
    printf("Enter marks for C Programming: ");
    scanf("%f", &c);
    printf("Enter marks for Digital Electronics: ");
    scanf("%f", &de);
    printf("Enter marks for Engineering Graphics: ");
    scanf("%f", &cad);
    printf("Enter marks for Mathematics: ");
    scanf("%f", &maths);
    printf("Enter marks for Physics: ");
    scanf("%f", &ep);
    avg = (c + de + cad + maths + ep) / 5;
    if(c<0||c>100||de<0||de>100||cad<0||cad>100||maths<0||maths>100||ep<0||ep>100)
    {
        printf("Invalid input! Marks should be between 0 and 100.");
    }
    else
    {
        printf("Average: %.2f\n", avg);
        if(avg>95)
        {
            printf("Grade: A+\n");
            printf("Excellent performance!\n");
        }
        else if(avg >= 90)
        {
            printf("Grade: A+\n");
        }
        else if(avg >= 80)
        {
            printf("Grade: A\n");
        }
        else if(avg >= 70)
        {
            printf("Grade: B\n");
        }
        else if(avg >= 60)
        {
            printf("Grade: C\n");
        }
        else
        {
            printf("Grade: F\n");
        }
    }
}