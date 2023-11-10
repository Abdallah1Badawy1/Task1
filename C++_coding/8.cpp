#include "task.h"

int main(void)
{
    int height;

    cout << "Enter the height of the right-angled triangle: ";
    cin >> height;

    eighthq(height);

    return (0);
}

/**
 * @brief Prints a pattern of a right-angled triangle using asterisks.
 * 
 * The function takes an integer height as input and prints a right-angled
 * triangle pattern with asterisks. The triangle has height rows, where each
 * row contains '*' characters. The first row contains one '*', and each
 * subsequent row adds one more '*' character.
 * 
 * @param height The height (number of rows) of the right-angled triangle.
 */

void eighthq(int height)
{
    for (int i = 1; i <= height; ++i)
	{
        	for (int j = 1; j <= i; ++j)
		{
            		cout << '*';
        	}
        	cout << endl;
    	}
}
