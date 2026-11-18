// struct problems
// Create a structure student with roll number, name and marks. Input details of 5 students and display all their details.

#include<stdio.h>

typedef struct stdDetails
{
    int marks;
    int roll_no;
    char name[50];
}sd;

int main(void)
{
    sd student[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %d %s",&student[i].marks,&student[i].roll_no,&student[i].name);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d %d %s",student[i].marks,student[i].roll_no,student[i].name);
    }

    return 0;
}
