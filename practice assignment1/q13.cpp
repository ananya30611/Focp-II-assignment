// Create a program to simulate an ATM machine using a switch statement. Include options for withdrawal, deposit, balance inquiry, and exit, with error handling for invalid input and insufficient balance.
#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000.0, amount;
    
    do {
        cout << "\nATM Menu:\n";
        cout << "1. Withdraw Money\n";
        cout << "2. Deposit Money\n";
        cout << "3. Balance Inquiry\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance!\n";
                } else if (amount <= 0) {
                    cout << "Invalid amount!\n";
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful! New balance: " << balance << "\n";
                }
                break;
            
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid amount!\n";
                } else {
                    balance += amount;
                    cout << "Deposit successful! New balance: " << balance << "\n";
                }
                break;
            
            case 3:
                cout << "Your balance: " << balance << "\n";
                break;
            
            case 4:
                cout << "Exiting ATM. Thank you!\n";
                break;
            
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);
    
    return 0;
}
