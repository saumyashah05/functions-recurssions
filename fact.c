#include <stdio.h>
#include<math.h>

int factorial(int);

int factorial(int a){
    if (a==1 || a==0)
    {
        return 1;
    }
    return factorial(a-1)*a;

}

int main(){

    int a;
    printf("enter a number");
    scanf("%d",&a);

    printf("the factorial of %d is %d", a , factorial(a));

    return 0;

}