//create a info book to take car name and year and print those through the use of pointer

#include<stdio.h>

struct Car {
    int year;
    char name[50];
};
int main(void)
{
    struct Car car1 = {1999,"BMW"};
    struct Car *ptr = &car1;

    printf("Car name is %s and is of year %d.",ptr->name,ptr->year);
    return 0;
}