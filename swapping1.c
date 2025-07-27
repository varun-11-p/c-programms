// b) Swapping using Multiplication and Division

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nOriginal values:\na = %d, b = %d\n", a, b);
    //logic begins
if (b != 0) {
        a = a * b;
        b = a / b;
        a = a / b;
        printf("\nAfter swapping using Multiplication/Division:\na = %d, b = %d\n", a, b);
    } else {
        printf("\nCannot perform multiplication/division swap when b = 0\n");
    }
    return 0;
}