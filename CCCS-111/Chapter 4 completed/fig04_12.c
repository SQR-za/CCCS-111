/*slide 100*/
/*using the continue statement in a (for) statement*/
#include <stdio.h>

int main()
{ /*يعيد 10 مرات*/
    for (unsigned int x = 1; x <= 10; ++x)
    {
        if (x == 5)
        {
            continue; /*for يسوي سكيب لباقي الكود داخل */
        }
        printf("%u ", x);
    }
    puts("\nUsed continue to skip printing the value 5");
}