//Count total set bits in all numbers from 1 to n
  
#include <stdio.h>

int countSetBits(int n) {
    if (n == 0) return 0;
    int x = 0;
    while ((1 << x) <= n) x++;
    x--;

    int bitsUpTo2X = x * (1 << (x - 1));
    int msbFrom2X = n - (1 << x) + 1;
    int rest = countSetBits(n - (1 << x));

    return bitsUpTo2X + msbFrom2X + rest;
}

int main() {
    int n = 5;
    printf("Total set bits: %d\n", countSetBits(n));
    return 0;
}