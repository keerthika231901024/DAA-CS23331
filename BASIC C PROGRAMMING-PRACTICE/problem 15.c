/* Write a C program to find the reverse of the given integer? */

#include <stdio.h>
int main() {
    int n, reverse = 0;
    scanf("%d", &n);
    while (n != 0) {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }
    printf("%d\n", reverse);
    return 0;
}
