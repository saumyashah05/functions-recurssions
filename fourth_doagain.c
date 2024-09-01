//fibonacci series value at nth term
//0,1,1,2,3,5,8,13....
// fibonacci(n)= fibonacci(n-1) + fibonacci(n-2)

int fibonacci(int);

int fibonacci(int n)
{
    if(n==1 || n==2)
    {
        return (n-1);
    }
    return fibonacci(n-1) + fibonacci(n-2);
}


#include <stdio.h>

int main(){

    int n;
    printf("enter value of n: \n");
    scanf("%d",&n);

    printf("the value of fibonacci series at n = %d is %d", n, fibonacci(n));

    return 0;

}