/*Slide 218*/
#include <stdio.h>

int main()
{
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int student = 1;
    int result;

    while (student <= 10)
    {
        /*I have problem with %s if I remove it the code works*/
        printf("%s", "Enter result: (1=pass, 2=fail)");
        scanf("%d", &result);

        if (result == 1)
        {
            passes = passes + 1;
        }
        else
        {
            failures = failures + 1;
        }

        student = student + 1;
    }

    printf("Passed %u\n", passes);
    printf("Failed %u\n", failures);

    if (passes > 8)
    {
        puts("Bonus to instructor!");
    }
}