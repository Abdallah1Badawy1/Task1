#include "task.h"

int main()
{
    string input;

    cout << "Enter the str  : ";
    getline(cin, input);

    if (seventhq(input))
        cout << "The string is a palind" << endl;
    else
        cout << "The string isn't  a palind" << endl;

    return 0;
}
/**
 * @brief Determines if a given string is a palindrome.
 * 
 * The function takes a string as input and checks if it is a palindrome,
 * meaning it reads the same backward as forward. It compares characters
 * from the beginning and end of the string towards the center to determine
 * if it is a palindrome or not.
 * 
 * @param str The input string to be checked.
 * @return True if the string is a palindrome, false otherwise.
 */
bool seventhq(const string& str)
{
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        if (str[start] != str[end])
            return false;
        ++start;
        --end;
    }
    return (true);
}
