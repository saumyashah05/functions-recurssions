
#include <stdio.h>

int main(){

    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);

    /* here it will print 6 6 4 
       as execution order is right to left if same variables
       so first a++ it will print 4 then a becomes 5
       ++a will make it 6 and print the same */ 

    return 0;

}