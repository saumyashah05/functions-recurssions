// fibonacci series upto n terms
#include <stdio.h>

int fibonacci(int);

int fibonacci(int n)
{
    int a = 0, b = 1, next;

    // base
    if (n > 0)
    {
        printf("%d ", a);
    }
    if (n > 1)
    {
        printf("%d ", b);
    }

    // remaining cases

    for (int i = 3; i <= n; i++)
    {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
}

int main()
{

    int n;
    printf("enter a number: \n");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("pls enter a positive integer");
    }
    else
    {
        printf("fibonacci series upto n terms is \n");
        fibonacci(n);
    }

    return 0;
}