#include <stdio.h>
int main() {
    int x, rev = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &x);
    while (x != 0) {
        remainder = x % 10;
        rev = rev * 10 + remainder;
        x /= 10;
    }
    printf("Reversed number = %d", rev);
    return 0;
}

