//Program to find whether a number is power of two

#include<stdio.h>

int isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int n = 8;
    printf("%s\n", isPowerOfTwo(n) ? "Yes" : "No");
    return 0;
}