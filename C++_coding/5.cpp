#include "task.h"

int main(void)
{
    int start, end;

    cout << "Enter the start Abdullah : ";
    cin >> start;
    cout << "Enter the end abdullah : ";
    cin >> end;

    int sum = fifthq(start, end);

    cout << "Sum of even numbers in the range [" << start << ", " << end << "]: " << sum << endl;

    return (0);
}

/**
 * @brief Calculates the sum of all even numbers in a given range.
 * 
 * The function takes two integers, start and end, as input and calculates
 * the sum of all even numbers in the range [start, end]. It considers both
 * start and end values in the range, and if start is greater than end,
 * it swaps the values to ensure a valid range.
 * 
 * @param start The starting value of the range.
 * @param end The ending value of the range.
 * @return The sum of all even numbers in the given range.
 */
int fifthq(int start, int end)
{
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    int sum = 0;
    for (int i = start; i <= end; ++i)
	{
        	if (i % 2 == 0)
            	sum += i;	
	}
    return (sum);
}
