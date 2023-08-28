/*slide 179*/
#include <stdio.h>

unsigned long long int fibonacci(unsigned int n);

int main()
{
    unsigned int number;

    printf("%s", "Enter an integer");
    scanf("%u", &number);

    unsigned long long int result = fibonacci(number);

    printf("Fibonacci(%u), = %11u\n", number, result);
}

unsigned long long int fibonacci(unsigned int n)
{
    if (0 == n || 1 == n)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}