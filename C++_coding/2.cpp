#include "task.h"
/* q 2 check for prime numbers */

int main (void)
{
    int num;

    cout << "Enter a positive num : ";
    cin >> num;

    if (num <= 0)
        cout << "There is no negative num in prime num " << endl;
    else
	{
        if (secondq(num))
            cout << "' "<<num <<" '  is a prime number " << endl;
        else
            cout <<"' "<< num << " ' may be odd or even " << endl;
    } return (0);
}

/**
 * @brief Checks if a given number is prime.
 * 
 * The function determines if the provided number is prime or not.
 * It iterates from 2 to the square root of the number, checking for
 * divisibility. If the number has any divisors within this range,
 * it is not prime. Otherwise, it is considered prime.
 * 
 * @param n The number to be checked for primality.
 * @return True if the number is prime, false otherwise.
 */

bool secondq(int n) {
    if (n <= 1)
	return false;

    for (int i = 2; (i * i) <= n; ++i)
        
        if (n % i == 0) 
        return (false);

    return (true);
}
