/*slide 84
asks the user to write two numbers and then the app tell him the relations between them
using if statment and equality operators
كتبن شرح لها في المثال السابق رقم 5 اخر الاسطر*/
#include <stdio.h>
int main()
{
    printf("Enter two integers and I will tell you\n");
    printf("the relationships they satisfy: ");

    int num1; /*اول رقم يتم قراءته من المستخدم*/
    int num2; /*ثاني رقم يتم قراءته من المستخدم*/

    scanf("%d %d", &num1, &num2); /*read two integers*/
    if (num1 == num2)
    {
        printf("%d is equal to %d\n", num1, num2);
    }
    if (num1 != num2)
    {
        printf("%d is not equal to %d\n", num1, num2);
    }
    if (num1 < num2)
    {
        printf("%d is less than %d\n", num1, num2);
    }
    if (num1 > num2)
    {
        printf("%d is greater than %d\n", num1, num2);
    }
    if (num1 <= num2)
    {
        printf("%d is less than or equal to %d\n", num1, num2);
    }
    if (num1 >= num2)
    {
        printf("%d is greater than or equal to %d\n", num1, num2);
    }
}
/*كل شي استخدمناه هنا تم شرحه سابقا لكن للتأكيد بشرح ال اف ستيتمنت
if statement
if ( condition هنا تكتب الشرط )
{
     code هنا بين الاقواس هذي تكتب الكود
}
معلومه اضافيه كل العمليات الحسابية تبدأ من اليسار لليمين ماعدا اليساوي الواحده تكون من اليمين
عشان كذا نكتبها مرتين مثل السطر 15 بدل = واحده
بعض الكلمات اللي ممنوع تستخدمها كمتغير لأن لها معنى في اللغه
auto - do - goto - signed - unsigned - break - double - if - sizeof - void
case - else - int... شكلها مره كثير راجع سلايد 98 شابتر 2 مافيني حيل اكتبها كلها هههههه
*/
