//sum of n natural numbers using recursion
#include <stdio.h>

int Sum(int);

int Sum(int n)
{
   if(n==1)
   {
    return 1;
   }
   
    return Sum(n-1)+n;
}


int main(){

    int n;
    printf("enter a number: \n");
    scanf("%d",&n);

    printf("sum of first %d natural numbers is %d", n , Sum(n));

    return 0;

}