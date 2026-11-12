// Write a program to reverse a string using two pointers without using another character array.
#include<stdio.h>
#include<string.h>

void swap(char *a, char *b)
{
    char temp = *b;
    *b = *a;
    *a = temp;
}
int main(void)
{
    char string[10]="Shivam";
    char *left,*right;
    left = &string[0];
    right = &string[strlen(string)-1];
    
    while (left<right)
    {
        swap(left,right);
        left++;
        right--;
    }
    
    printf("%s",string);

    return 0;

}