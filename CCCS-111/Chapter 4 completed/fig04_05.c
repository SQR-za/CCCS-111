/*slide 42*/
#include <stdio.h>
/*فكرة الكود جمع الاعداد الصحيحه الزوجيه من 2 الى 100 */
int main()
{
    unsigned int sum = 0;

    for (unsigned int number = 2; number <= 100; number += 2)
    {
        sum += number;
    }
    printf("sum is %u\n", sum);
}