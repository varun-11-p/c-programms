// c) Swapping using Bitwise XOR
#include<stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nOriginal values:\na = %d, b = %d\n", a, b);
    //logic begins
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nAfter swapping using Bitwise XOR:\na = %d, b = %d\n", a, b);
    return 0;
}