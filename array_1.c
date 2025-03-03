#include <stdio.h>

int main() {
    int arr1[15], arr2[15];

    // Initialize arr1 with values 1 to 15
    for (int i = 0; i < 15; i++) {
        arr1[i] = i + 1;
    }

    // Populate arr2 with squares of arr1
    for (int i = 0; i < 15; i++) {
        arr2[i] = arr1[i] * arr1[i];
    }

    // Print arr2
    for (int i = 0; i < 15; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
