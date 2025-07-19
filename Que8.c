//Divide two integers without using multiplication, division, or mod operator
  
#include <stdio.h>
#include <limits.h>

int divide(int dividend, int divisor) {
    if (divisor == 0) return INT_MAX;
    if (dividend == 0) return 0;

    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    dividend = dividend < 0 ? -dividend : dividend;
    divisor = divisor < 0 ? -divisor : divisor;

    int quotient = 0;
    while (dividend >= divisor) {
        int temp = divisor, multiple = 1;
        while (dividend >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }
        dividend -= temp;
        quotient += multiple;
    }

    return sign * quotient;
}

int main() {
    int dividend = 43, divisor = -8;
    printf("Quotient: %d\n", divide(dividend, divisor));
    return 0;
}