//Calculate square of a number without using *, /, or pow()

#include <stdio.h>

int square(int n) {
    if (n == 0) return 0;
    if (n < 0) n = -n;

    int x = n >> 1;
    if (n & 1)
        return (square(x) << 2) + (x << 2) + 1;
    else
        return (square(x) << 2);
}

int main() {
    int n = 5;
    printf("Square: %d\n", square(n));
    return 0;
}
