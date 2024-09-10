#include <iostream>
#include <string>

using namespace std;

void printHeartWithNames() {
    const int n = 6;
    string message = "Pulok & Sadia";
    int messageLength = message.length();

    // Print the upper part of the heart
    for (int i = n / 2; i <= n; i += 2) {
        for (int j = 1; j < n - i; j += 2) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Print the message inside the heart
    for (int i = 1; i <= n; i++) {
        if (i == n / 2 + 1) {
            // Center the message in the heart
            int spacesBefore = (n * 2 - messageLength) / 2;
            for (int j = 0; j < spacesBefore; j++) {
                cout << " ";
            }
            cout << message;
            for (int j = 0; j < spacesBefore; j++) {
                cout << " ";
            }
        } else {
            for (int j = 1; j <= i; j++) {
                cout << " ";
            }
            for (int j = 1; j <= n * 2 - 2 * i; j++) {
                cout << "*";
            }
        }
        cout << endl;
    }
}

int main() {
    printHeartWithNames();
    return 0;
}
