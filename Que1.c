//Count set bits in an integer

#include <stdio.h>

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int n = 9;
    printf("Set bits: %d\n", countSetBits(n));
    return 0;
}