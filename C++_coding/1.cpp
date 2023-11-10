#include "task.h"

int main(void)
{
    int num;

    cout << "Enter a positive num: "<<endl;
    cin >> num;

    if (num < 0)
        	cout << "Please enter a positive num " << endl;
    else
        cout << "Factorial of " << "'"<<num <<"' is : "<< firstq(num) << endl;

    return (0);
}

/* The function employs a recursive approach to compute the factorial,
 * with the base cases defined for 0 and 1. For any other non-negative input,
 * it multiplies the current number with the factorial of the decremented number.
 * 
 * @param n A non-negative integer for which the factorial is to be calculated.
 * @return An integer representing the factorial of the input number.
 */

int firstq(int n)
{
    if (n == 0 || n == 1)
        return (1);
     else
        return (n * firstq(n - 1));
}
