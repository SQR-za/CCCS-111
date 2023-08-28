/*slide 45*/
/*Compound-Interest Calculations حسابات الفائدة المركبة*/
#include <stdio.h>
#include <math.h>
int main()
{
    double principal = 1000.0; /*المبلغ المستثمر */
    double rate = .05;         /*نسبة الفائدة*/

    printf("%4s%21s\n", "Year", "Amount on deposit");

    for (unsigned int year = 1; year <= 10; ++year) /*حساب ايداع الربح كل سنه*/

    {
        double amount = principal * pow(1.0 + rate, year); /*حساب اجمالي المبلغ مع الربح في كل سنه*/

        printf("%4u%21.2f\n", year, amount);
    }
}