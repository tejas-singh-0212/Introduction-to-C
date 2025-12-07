#include<stdio.h>
#include<string.h>
//WAP to enter the records of 10 students, records include his name, roll no. and marks in 3 subjets. 
// Find out the total marks, the percentage of marks and the grade he has scored (>90:A+, 80-90:A, 70-80:B, 60-70:C, 50-60: D, 40-50:E, <40: F)
struct Student
{
    char name[20];
    int roll;
    float physics, C, maths;
};

void main()
{
    struct Student s[10];
    float total, percent;
    for (int i=0;i<10;i++)
    {
        printf("Enter the records of student %d: \n", i+1);
        printf("Enter name of student: ");
        scanf("%s", &s[i].name);
        printf("Enter roll number of student: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks in Physics (out of 100): ");
        scanf("%f", &s[i].physics);
        printf("Enter marks in C (out of 100): ");
        scanf("%f", &s[i].C);
        printf("Enter marks in Maths (out of 100): ");
        scanf("%f", &s[i].maths);
        total = s[i].physics + s[i].C + s[i].maths;
        percent = total/3;
        printf("\n===============================================");
        printf("Report Card of student is:\n");
        printf("Name: %s\n", s[i].name);
        printf("Roll no.: %d\n", s[i].roll);
        printf("Total Marks: %f\n", total);
        printf("Percentage: %f\n", percent);
        if (percent > 90){
            printf("Grade secured: A+\n");
        }
        else if (percent > 80){
            printf("Grade secured: A\n");
        }
        else if (percent > 70){
            printf("Grade secured: B\n");
        }
        else if (percent > 60){
            printf("Grade secured: C\n");
        }
        else if (percent > 50){
            printf("Grade secured: D\n");
        }
        else if (percent > 40){
            printf("Grade secured: E\n");
        }
        else{
            printf("Grade secured: F\n");
        }
    }
}