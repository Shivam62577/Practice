/*
Create a structure Student containing roll number, name and marks.

Use a structure pointer to:
- Input student details.
- Modify their marks.
- Display the updated details.
*/

#include<stdio.h>

struct Student{
    int roll_no;
    char name[50];
    int marks;
};

int main(void)
{
    struct Student student;
    struct Student *ptr = &student;
    printf("Enter the details: ");
    scanf("%d %s %d",&ptr->roll_no,ptr->name,&ptr->marks);

    int new;
    printf("Enter changed marks: ");
    scanf("%d",&new);

    ptr->marks=new;

    printf("Updated details: %d %s %d",ptr->roll_no,ptr->name,ptr->marks);


    return 0;
}