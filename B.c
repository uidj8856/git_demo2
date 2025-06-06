#include <stdio.h>

// Program 1: Add two numbers
void add_two_numbers() {
    int a, b, sum;
    printf("Enter two numbers to add: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d\n", sum);
}

// Program 2: Sort an array (Bubble Sort)
void sort_array() {
    int n, i, j, temp;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Bubble sort
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int choice;
    printf("Choose an option:\n1. Add two numbers\n2. Sort an array\nEnter choice: ");
    scanf("%d", &choice);
    if(choice == 1) {
        add_two_numbers();
    } else if(choice == 2) {
        sort_array();
    } else {
        printf("Invalid choice.\n");
    }
    return 0;
}