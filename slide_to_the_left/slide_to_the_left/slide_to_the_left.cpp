#include <iostream>
#include <cassert>
#include "array_shift.h"

// Function to print the array
void print_array(int arr[], int size) {
    std::cout << "[";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << (i < size - 1 ? ", " : "");
    }
    std::cout << "]" << std::endl;
}

int main() {
    // Test case for arr1
    int arr1[] = { 1, 2, 3, 4, 5 };
    array_shift(arr1, 5, 1); // This would update arr1 to [2, 3, 4, 5, 1]
    print_array(arr1, 5);
    array_shift(arr1, 5, 1); // This would update arr1 to [3, 4, 5, 1, 2]
    print_array(arr1, 5);
    array_shift(arr1, 5, 1); // This would update arr1 to [4, 5, 1, 2, 3]
    print_array(arr1, 5);

    // Test case for arr2
    int arr2[] = { 1, 2, 3, 4, 5 };
    array_shift(arr2, 5, 3); // This would update arr2 to [4, 5, 1, 2, 3]
    print_array(arr2, 5);
    array_shift(arr2, 5, 3); // This would update arr2 to [2, 3, 4, 5, 1]
    print_array(arr2, 5);
    array_shift(arr2, 5, 3); // This would update arr2 to [5, 1, 2, 3, 4]
    print_array(arr2, 5);

    // Test case for arr3 (originally)
    int arr3[] = { 1, 2, 3 };
    array_shift(arr3, 3, 3); // This would update arr3 to [1, 2, 3] (back to where it began)
    print_array(arr3, 3);

    // Test case for arr4
    int arr4[] = { 1, 2, 3 };
    array_shift(arr4, 3, 4); // This would update arr4 to [2, 3, 1]
    print_array(arr4, 3);

    return 0;
}
