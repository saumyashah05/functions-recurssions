// celsius to fahrenheit
#include <stdio.h>

float temp(float);

float temp(float c)
{
    float f = (9.0 / 5.0 * c) + 32;
    printf("temperature in fahrenheit is %.2f", f);
    return f;
}

int main()
{

    float c;

    printf("enter temp in celsius: \n");
    scanf("%f", &c);

    temp(c);

    return 0;
}