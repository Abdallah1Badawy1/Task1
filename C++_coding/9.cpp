#include "task.h"

int main(void)
{
    int initial;

    cout << "Enter your initial balance: ";
    cin >> initial;
    ninthq(initial);

    return (0);
}


/**
 * @brief Simulates a simple ATM machine.
 * 
 * The function simulates an ATM machine allowing users to check their balance,
 * withdraw money, and deposit funds. It initializes the balance, and then
 * repeatedly prompts the user for actions until they choose to exit.
 * 
 * @param initialBalance The initial balance in the account.
 */

void ninthq(int initialBalance) {
    int balance = initialBalance;

    while (1)
	{
        cout << "ATM Menu:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Deposit Funds" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cout << "Enter your choice : ";
        cin >> choice;

        if (choice == 1)
            cout << "Your Balance: $" << balance << endl;
        else if (choice == 2)
	{
            int withdrawalAmount;
            cout << "Enter the amount to withdraw: $";
            cin >> withdrawalAmount;

            if (withdrawalAmount > balance)
                cout << "Insufficient funds!" << endl;
            else {
                balance -= withdrawalAmount;
                cout << "Withdrawal successful. Your new balance: " << balance << endl;
            }
        } else if (choice == 3)
		{
            int depositAmount;
            cout << "Enter the amount to deposit: ";
            cin >> depositAmount;

            if (depositAmount < 0)
                cout << "Invalid deposit amount!" << endl;
            else {
                balance += depositAmount;
                cout << "Deposit successful. Your new balance: $" << balance << endl;
            }
        } else if (choice == 4) {
            cout << "Exiting ATM." << endl;
            break;
        } else
            cout << "Invalid . Please enter a num between 1 and 4." << endl;
    }
}
