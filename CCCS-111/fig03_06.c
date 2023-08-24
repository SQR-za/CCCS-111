/*Slide 163*/
#include <stdio.h>
int main()
{
    unsigned int counter;
    int grade;
    int total;
    int average;

    total = 0;
    counter = 1;
    while (counter <= 10)
    {
        printf("%s", "Enter grade: ");
        scanf("%d", &grade);
        total = total + grade;
        counter = counter + 1;
    }
    average = total / 10;
    printf("Class average is %d\n", average);
}