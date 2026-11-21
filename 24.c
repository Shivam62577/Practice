/*
Create a structure Student containing:
- Roll number
- Name
- A union containing either percentage or CGPA.
Input the student's result type and display the corresponding value.
*/

#include<stdio.h>
union percentage
{
    int percent;
};

struct Student{
    int roll_no;
    char name[50];
    union percentage percent;
};

int main(void){
    struct Student std;
    printf("Enter the student details: ");
    scanf("%d %s %d",&std.roll_no,std.name,&std.percent.percent);

    printf("%d %s %d",std.roll_no,std.name,std.percent.percent);
    return 0;
}