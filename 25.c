/*Create a union that can store either:
- Marks (integer)
- Grade (character)
Create an array of 5 student structures containing this union. Input and display the appropriate result for every student.
*/


#include <stdio.h>

union resultSystem
{
    int marks;
    char grade;
};

int main(void)
{
    union resultSystem student[5];
    int choice;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter 1 for marks or 2 for grade: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            scanf("%d", &student[i].marks);
        }
        else if (choice == 2)
        {
            scanf(" %c", &student[i].grade);
        }
    }

    return 0;
}

