#include <stdio.h>

int main(){
    int a = 5;
    int b = 3;
    int c = a + b;
    printf("the value of a is %d and the value of b is %d and sum is %d\n",a,b,c);
    // modulus operator is used to get remainder 
    printf("the remainder when a is divided by b: %d\n", a%b);
    
    // this does not work in exponentialtion in c
    // int d = a^b

    return 0;
}