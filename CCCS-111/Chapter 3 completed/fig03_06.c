/*Slide 63*/
/*code instructuins فكرة التطبيق انه ياخذ 10 نسب من 100 ويطلع النسبة الموزونة من 100
1- Set total to zero
2- set grade counter to one
3----
4- While grade counter is less than or equal to ten(10)
5- input the next grade
6- Add the grade into the total
7- Add one to the grade counter
8----
9- set the class average to the total divided by ten
10- print the class average*/
#include <stdio.h>
int main()
{                              /*تسجيل مسميات المتغيرات بنوعها*/
    unsigned int counter;      /*عدد الدرجات المدخله*/
    int grade, total, average; /*قيمة الدرجات*/
    int total;                 /*مجموع الدرجات المدخله*/
    int average;               /*معدل الدرجات*/
    /*unsigned int = >0, !=-1 or less*/
    /*يمكن اختصار الثلاث اسطر في سطر واحد كذا
    int grade, total, average;*/
    total = 0;
    counter = 1;
    while (counter <= 10) /*عدد الدرجات المدخله 10*/
    {
        printf("%s", "Enter grade: ");
        scanf("%d", &grade);   /*يقرأ الدرجه من المستخدم ويحفظها في متغير القريد*/
        total = total + grade; /*يجمع الدرجه مع المجموع اللي قبله وهكذا*/
        counter = counter + 1; /*لما تدخل الدرجه يزيد 1 للكاونتر الين يوصل 10*/
    }
    average = total / 10;                     /*لما توصل الدرجات المدخله ل10 يقسم مجموعها على 10*/
    printf("Class average is %d\n", average); /*يطبع النسبة النهائية*/
}