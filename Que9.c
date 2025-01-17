//Power set

#include <stdio.h>
#include <math.h>

void printPowerSet(int arr[], int n) {
    int powerSetSize = pow(2, n);
    for (int i = 0; i < powerSetSize; i++) {
        printf("{ ");
        for (int j = 0; j < n; j++) {
            if (i & (1 << j))
                printf("%d ", arr[j]);
        }
        printf("}\n");
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printPowerSet(arr, n);
    return 0;
}
