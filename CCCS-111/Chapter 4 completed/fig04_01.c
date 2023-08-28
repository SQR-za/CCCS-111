/*slide 10*/
#include <stdio.h>
/*Counter-controlled iteration نوع التكرار وهو المنفصل*/
int main()
{
    unsigned int counter = 1;

    while (counter <= 10)
    {
        printf("%u\n", counter); /*حالة التكرار*/
        ++counter;
    }
}