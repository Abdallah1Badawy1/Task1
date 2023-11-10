#include "task.h"

void bubbleSort(int arr[], int size);

int main()
{
    const int s1 = 5;
    const int s2 = 7;

    int arr1[s1] = {3, 1, 4, 1, 5};
    int arr2[s2] = {2, 7, 1, 8, 2, 1, 4};

    tenthq(arr1, s1, arr2, s2);

    return (0);
}

/**
 * @brief Sorts an array using the bubble sort algorithm.
 * 
 * The function takes an integer array and its size as input and
 * sorts the array in ascending order using the bubble sort algorithm.
 * 
 * @param arr The integer array to be sorted.
 * @param size The size of the array.
 */
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/**
 * @brief Finds the common elements between two arrays.
 * 
 * The function takes two integer arrays and their sizes as input and
 * finds the common elements between them. It uses bubble sort to sort
 * both arrays and then iterates through them to find and display the
 * common elements.
 * 
 * @param arr1 The first integer array.
 * @param size1 The size of the first array.
 * @param arr2 The second integer array.
 * @param size2 The size of the second array.
 */
void tenthq(const int arr1[], int size1, const int arr2[], int size2) {
    int sortedArr1[size1], sortedArr2[size2];
    copy(arr1, arr1 + size1, sortedArr1);
    copy(arr2, arr2 + size2, sortedArr2);

    bubbleSort(sortedArr1, size1);
    bubbleSort(sortedArr2, size2);

    cout << "Common elements: ";
    int i = 0, j = 0;
    while (i < size1 && j < size2) {
        if (sortedArr1[i] == sortedArr2[j]) {
            cout << sortedArr1[i] << " ";
            ++i;
            ++j;
        } else if (sortedArr1[i] < sortedArr2[j]) 
            ++i;
          else
            ++j;
    }
    cout << endl;
}
