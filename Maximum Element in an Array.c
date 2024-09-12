#include <stdio.h>

// Finding the maximum element in an array
int findMax(int arr[], int n) {
    if (n <= 0) {
        // Handling the scenario where the array is empty
        return -1;
    }
    
    int max = arr[0]; // Assuming the first element is the maximum

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Updating the maximum if current element is greater
        }
    }
    
    return max;
}

int main() {
    int arr[] = {3, 5, 7, 2, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, n);
    printf("The maximum element is: %d\n", max);

    return 0;
}




