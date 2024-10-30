#include <stdio.h>

int main() {
    int arr[5];
    int smallest, second_smallest;

    // Input 5 elements in the array
    printf("Enter 5 elements in the array (each element < 9999):\n");
    for (int i = 0; i < 5; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Initialize smallest and second smallest with first two elements
    smallest = arr[0];
    second_smallest = 9999;

    // Find smallest and second smallest
    for (int i = 1; i < 5; i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }

    printf("The Second smallest element in the array is: %d\n", second_smallest);

    return 0;
}