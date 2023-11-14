#include "task.h"
int main(void)
{
    int arrSize = 5;
    int arr[arrSize];
    cout << "Enter  num for the array : " << endl;
    for (int i = 0; i < arrSize; ++i)
       	 cin >> arr[i];

    thirdq(arr, arrSize);

    cout << " Array: ";
    for (int i = 0; i < arrSize; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return (0);
}
/**
 * @brief Reverses an array in-place without using additional data structures.
 * 
 * The function takes an integer array and its size as parameters and uses a
 * two-pointer approach to swap elements from both ends of the array until the
 * pointers meet at the center. The input array is modified directly.
 * 
 * @param arr An integer array to be reversed.
 * @param size The size of the array.
 */
void thirdq(int arr[], int size) {
    int gos = 0;
    int end = size - 1;

    while (gos < end)
	{
        int temp = arr[gos];
        arr[gos] = arr[end];
        arr[end] = temp;

        ++gos;
        --end;
    }
}

