/*Slide 89*/
/*نفس فكرة المثال السابق 06 لكن هنا مايوقف عند 10 درجات تقدر تخليه يوقف
متى ماتغبي بانك تكتب -1 ويحسب الدرجات اللي حطيتها*/
#include <stdio.h>

int main()
{
    unsigned int counter;
    int grade;
    int total;

    float average;

    total = 0; /*بداية المجموع 0*/
    counter = 0;

    printf("%s", "Enter grade, -1 to end: "); /*رسالة ادخال*/
    scanf("%d", &grade);                      /*تقرأ الدرجة المدخله*/

    while (grade != -1) /*لما يكتب -1 تتوقف اللوب وتنتقل للكود سطر 34*/
    {
        total = total + grade; /*تجمع الدرجه مع المجموع */
        counter = counter + 1;
        printf("%s", "Enter grade, -1 to end: ");
        scanf("%d", &grade);
    }
    if (counter != 0) /*شرط اذا المدخل على الاقل كان رقم واحد احسب معدل كل الدرجات*/
    {
        average = (float)total / counter;
        printf("Class average is %.2f\n", average);
    }
    else /*اذا ضغط انتر وماكتب درجه اطبع هذي الرساله تحت*/
    {
        puts("No grades were entered");
    }
}
