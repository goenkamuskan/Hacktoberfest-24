#include<iostream>
#include<climits>
using namespace std;

// Function to find and swap the maximum and minimum elements in the array
void swap_max_min(int arr[], int size) {
    int maxValue = INT_MIN; // Initialize to the smallest possible integer
    int minValue = INT_MAX; // Initialize to the largest possible integer
    int maxIndex = -1, minIndex = -1;

    // Iterate over the array to find max and min values and their indices
    for (int i = 0; i < size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i]; // Update max value
            maxIndex = i;      // Update max index
        }
        if (arr[i] < minValue) {
            minValue = arr[i]; // Update min value
            minIndex = i;      // Update min index
        }
    }

    // Swap the elements at maxIndex and minIndex
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    // Call the function to swap max and min
    swap_max_min(arr, size);

    // Output the array after swapping
    cout << "Array after swapping max and min: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
