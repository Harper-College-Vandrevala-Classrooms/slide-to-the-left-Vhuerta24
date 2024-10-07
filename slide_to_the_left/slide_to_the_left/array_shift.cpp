#include "array_shift.h"

void array_shift(int arr[], int size, int shifts) {
    if (size <= 0 || shifts <= 0) return; // No need to shift if size is zero or shifts are non-positive

    // Normalize the number of shifts
    shifts = shifts % size;

    // Shift the array to the left by 'shifts'
    for (int i = 0; i < shifts; i++) {
        int temp = arr[0];
        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
}
