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
    int choice;

    do {
        cout << "ATM Menu:\n"
             << "1. Check Balance\n"
             << "2. Withdraw Money\n"
             << "3. Deposit Funds\n"
             << "4. Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        (choice == 1) ? cout << "Your Balance: $" << balance << endl
                      : (choice == 2) ? (
                            (balance -= (int)withdrawalAmount > balance ? (cout << "Insufficient funds!\n", 0)
                                                                        : (cout << "Withdrawal successful. Your new balance: $" << balance << endl, 0))
                        )
                      : (choice == 3) ? (
                            (balance += (int)depositAmount < 0 ? (cout << "Invalid deposit amount!\n", 0)
                                                                 : (cout << "Deposit successful. Your new balance: $" << balance << endl, 0))
                        )
                      : ((choice == 4) ? cout << "Exiting ATM.\n" : cout << "Invalid choice. Please enter a number between 1 and 4.\n");

    } while (choice != 4);
}

int main() {
    int initialBalance = 1000;
    ninthq(initialBalance);
    return 0;
}
