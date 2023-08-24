/*Slide 32*/
/*Function scanf:used to obtain two integers typed by a user at
the keyboard, computes the sum of these values and
prints the result using printf.
*/
#include <stdio.h>
int main()
{
    int num1;
    int num2;
    /*this message is called a prompt because it tells the user to take a speceifivc action.*/
    printf("Enter first number\n");
    scanf("%d", &num1);
    /*the first argument (%d) indicates the type of data that should be
    input by the user.
    The %d conversion specifier indicates that the data should be an integer.
    the litter d = decimal integer.
    the % is treated by scanf as a special character that begins a conversion spesifier.
    the secound argument begins with an ampersand (& = address operator) in C
    followed by the variable name.*/
    printf("Enter second number\n");
    scanf("%d", &num2);

    int sum; /*this is assingment statement */
    sum = num1 + num2;

    printf("Sum is %d\n", sum); /* we can also combine printf and sum = num1 + num2 like this*/
    /*printf(sum is %d/n, num1 + num2)*/
}
/* a variable name in C is any valid identifier.
which is a series of characters consisting of letters, digits and undercores (_)
that does not begin with a digit [note: in C a and A are different identifiers.]*/