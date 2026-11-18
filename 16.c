// car brand and year changing using struct and pointer access 

#include<stdio.h>
#include<string.h>
struct Car 
{
    int year;
    char name[30];
};

int main(void)
{
    struct Car car = {1999,"BMW"};

    struct Car *ptr = &car;
    ptr->year = 2025;
    strcpy(ptr->name,"Gwagonr");

    printf("%d %s",ptr->year,ptr->name);

    return 0;
}