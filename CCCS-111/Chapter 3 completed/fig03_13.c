/*sliede 129*/
/*و preincrementing هذا المثال يوضح الفرق بين
postincrementing for the ++
يعني بين ++ لما تكون يمين او يسار*/
#include <stdio.h>

int main()
{
    int c;
    c = 5;
    printf("%d\n", c);
    printf("%d\n", c++); /*Use the current value of c in the expression in which c resides, then increment c by 1.*/
    printf("%d\n\n", c);

    c = 5;
    printf("%d\n", c);
    printf("%d\n", ++c); /*Increment c by 1, then use the new value of c in the expression in which c resides.*/
    printf("%d\n", c);
}