#include <stdio.h>

int main() {
    int arr1[20], arr2[20];
    int j = 0;

    // Initialize arr1 with values 1 to 20
    for (int i = 0; i < 20; i++) {
        arr1[i] = i + 1;
    }

    // Populate arr2 with even numbers from arr1
    for (int i = 0; i < 20; i++) {
        if (arr1[i] % 2 == 0) {
            arr2[j] = arr1[i];
            j++;
        }
    }

    // Print arr2
    for (int i = 0; i < j; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
