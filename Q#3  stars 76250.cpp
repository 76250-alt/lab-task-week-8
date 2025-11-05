#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {         // Outer loop for rows
        for (int j = 1; j <= i; j++) {     // Inner loop for stars
            cout << "* ";
        }
        cout << endl;                      // Move to next line
    }
    return 0;
}
