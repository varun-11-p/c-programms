// d) Swapping using Logical and Relational Operators
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nOriginal values:\na = %d, b = %d\n", a, b);
    //logic begins
    if (a != b) {
        a = a + b - (b = a);
        printf("\nAfter swapping using Logical/Relational operator:\na = %d, b = %d\n", a, b);
    } else {
        printf("\nLogical/Relational operator swap doesn't work when a == b\n");
    }
    return 0;
}