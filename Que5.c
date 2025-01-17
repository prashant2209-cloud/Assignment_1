//Count number of bits to be flipped to convert A to B

#include <stdio.h>

int countBitsToFlip(int a, int b) {
    int xorVal = a ^ b, count = 0;
    while (xorVal > 0) {
        count += xorVal & 1;
        xorVal >>= 1;
    }
    return count;
}

int main() {
    int a = 29, b = 15;
    printf("Bits to flip: %d\n", countBitsToFlip(a, b));
    return 0;
}