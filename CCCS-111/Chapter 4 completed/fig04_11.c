/*slide 98*/
#include <stdio.h>

int main()
{
    unsigned int x;

    for (x = 1; x <= 10; ++x) /*تكرار 10 مرات*/
    {
        if (x == 5) /*اذا وصلت قيمة اكس 5 وقف التكرار*/
        {
            break;
        }
        printf("%u ", x);
    }
    printf("\nBroke out of loop at x == %u\n", x);
}