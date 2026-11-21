/*
Create a structure containing:
- Roll number
- Name
- Marks in 3 subjects
Input details of 5 students and display the student with the highest average marks.
*/

#include <stdio.h>

typedef struct studentRecord{

    int roll_no;
    char name[50];
    int phys;
    int maths;
    int chem;
    int avg;
}stdrec;


int main(void)
{
    stdrec student[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the roll no, name, and marks{physics,maths,chemistry} of student %d",i+1);
        scanf("%d %s %d %d %d",&student[i].roll_no,student[i].name,&student[i].phys,&student[i].maths,&student[i].chem);
    }
    
    for (int i = 0; i < 5; i++)
    {
        student[i].avg = (student[i].phys+student[i].maths+student[i].chem)/3;
    }
    

    if (student[0].avg>student[1].avg&&student[0].avg>student[2].avg)
    {
        printf("Student 1 has highest average marks.");
    }
    else if (student[1].avg>student[0].avg&&student[1].avg>student[2].avg)
    {
        printf("Student 2 has highest average marks.");
    }
    else if (student[2].avg>student[1].avg&&student[2].avg>student[0].avg)
    {
        printf("Student 3 has highest average marks.");
    }
    
    return 0;
}