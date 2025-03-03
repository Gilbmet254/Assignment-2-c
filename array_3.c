#include <stdio.h>

int main() {
    char names[20][50] = {
        "Alice", "Bob", "Charlie", "David", "Eve", "Frank", "Grace", "Hank", "Ivy", "Jack",
        "Karen", "Leo", "Mona", "Nina", "Oscar", "Paul", "Quincy", "Rachel", "Steve", "Tina"
    };
    int marks[20] = {85, 90, 78, 92, 88, 76, 95, 89, 77, 84, 91, 73, 82, 79, 87, 94, 81, 80, 83, 86};
    int total = 0;
    float average;

    // Calculate total marks
    for (int i = 0; i < 20; i++) {
        total += marks[i];
    }

    // Calculate average
    average = (float)total / 20;

    // Print average
    printf("Average marks: %.2f\n", average);

    return 0;
}
