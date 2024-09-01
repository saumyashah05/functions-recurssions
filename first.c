// avg of 3 numbers
#include <stdio.h>

float average(int, int, int);

float average(int a, int b, int c)
{
    float avg = (a + b + c) / 3.0;
    printf("average of three numbers is %.2f ", avg);
    return avg;
}

int main()
{

    int a, b, c;
    printf("enter 3 numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    average(a, b, c);

    return 0;
}