// force of attraction
#include <stdio.h>

float Force(float);

const float g = 9.8;

float Force(float mass)
{
    float force = g * mass;
    printf("Gravitaional force on the body is %.2f N \n", force);

    return force;
}

int main()
{

    float mass;

    printf("enter mass of body \n");
    scanf("%f", &mass);

    Force(mass);

    return 0;
}