//Find position of the only set bit
//
#include<stdio.h>

int findPosition(int n) {
    if (n <= 0 || (n & (n - 1)) != 0) return -1;
    int position = 1;
    while ((n & 1) == 0) {
        n >>= 1;
        position++;
    }
    return position;
}
//
int main() {
    int n = 16;
    int pos = findPosition(n);
    if (pos == -1) 
        printf("Invalid input\n");
    else 
        printf("Position: %d\n", pos);
    return 0;
}
