#include "task.h"

int main()
{
    const int Size = 5;
    int arr[Size];

    cout << "Enter " << Size << "numfor the array:" << endl;
    for (int i = 0; i < Size; ++i) {
        cin >> arr[i];
    }

    int min, max;

    sixthq(arr, Size, min, max);

    cout << "Smallest " << min << endl;
    cout << "Largest " << max << endl;

    return (0);
}

/**
 * @brief Finds the largest and smallest elements in an array.
 * 
 * The function takes an integer array and its size as input and finds
 * the largest and smallest elements in the array. It uses two variables,
 * min and max, to keep track of the current smallest and largest values
 * while iterating through the array.
 * 
 * @param arr An integer array.
 * @param size The size of the array.
 * @param min Reference to store the smallest element.
 * @param max Reference to store the largest element.
 */
void sixthq(const int arr[], int size, int& min, int& max) {
    if (size <= 0) {
        min = max = 0;
        return;
    }

    min = max = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] < min)
            min = arr[i];
        else if (arr[i] > max)
            max = arr[i];
       
    }
}
