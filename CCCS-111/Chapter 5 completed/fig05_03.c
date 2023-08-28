/*slide 25*/
#include <stdio.h>

int square(int y);

int main()
{
    for (int x = 1; x <= 10; ++x)
    {
        printf("%d ", square(x));
    }
    puts("");
}

int square(int y)
{
    return y * y;
}