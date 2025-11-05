#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n===  Menu ===\n";
        cout << "1. Say Hello\n";
        cout << "2. Say Goodbye\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
            cout << "Hello!\n";
        else if (choice == 2)
            cout << "Goodbye!\n";
        else if (choice != 3)
            cout << "Invalid choice. Try again.\n";

    } while (choice != 3);

    cout << "Exiting program... Goodbye!\n";

    return 0;
}
