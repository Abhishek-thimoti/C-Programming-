#include <stdio.h>

// Function to implement selection sort
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;

    // Outer loop to iterate through each element (except the last one)
    for (i = 0; i < n - 1; i++) {
        minIndex = i; // Assume the current element is the minimum

        // Inner loop to find the smallest element in the unsorted portion of the array
        for (j = i + 1; j < n; j++) {
            // If a smaller element is found, update minIndex
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the element at the current position (i)
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Function to print the array
void printArray(int arr[], int size)
{
    int i;

    // Loop through each element and print it
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n, i;

    // Ask the user to input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size 'n'
    int arr[n];

    // Ask the user to input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the unsorted array
    printf("Unsorted array: \n");
    printArray(arr, n);

    // Call the selection sort function to sort the array
    selectionSort(arr, n);

    // Print the sorted array
    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
