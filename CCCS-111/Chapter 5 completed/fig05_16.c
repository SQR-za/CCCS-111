/*slide 154*/
#include <stdio.h>

void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x = 1;
int main(void)
{
    int x = 5;

    printf("local x in outer scope of main is %d\n", x);

    {
        int x = 7;

        printf("local x in inner scope of main is%d\n", x);
    }
    printf("local x in ourer scope of main is %d\n", x);

    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();

    printf("\mlocal x in main is %d\n", x);
}

void useLocal(void)
{
    int x = 25;

    printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
    ++x;
    printf("local x in useLocal is %d before exiting useLocal\n", x);
}

void useStaticLocal(void)
{
    static int x = 50;

    printf("\nlocal static x is %d on entering useStaticLocal\n", x);
    ++x;
    printf("local statix x is %d on exiting useStaticLocal\n", x);
}
void useGlobal(void)
{
    printf("\nglobal x is %d on entering useGlobal\n", x);
    x *= 10;
    printf("global x is %d on exiting useGlobal\n", x);
}