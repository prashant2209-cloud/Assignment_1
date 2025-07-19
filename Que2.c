//Find the two non-repeating elements in an array of repeating elements
  

#include<stdio.h>

void findTwoNonRepeating(int arr[], int size) {
    int xorVal = 0, x = 0, y = 0, setBit;
    for (int i = 0; i < size; i++) {
        xorVal ^= arr[i];
    }

    setBit = xorVal & ~(xorVal - 1);

    for (int i = 0; i < size; i++) {
        if (arr[i] & setBit)
            x ^= arr[i];
        else
            y ^= arr[i];
    }
    printf("Non-repeating elements are: %d and %d\n", x, y);
}

int main() {
    int arr[] = {2, 4, 7, 9, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    findTwoNonRepeating(arr, size);
    return 0;
}