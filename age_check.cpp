#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 0) {
        cout << "Error: Invalid age!";
    }
    else if (age >= 80) {
        cout << "You are too old to drive.";
    }
    else if (age >= 18) {
        cout << "You can drive.\n";
        cout << "Drive carefully!";
    }
    else {
        cout << "You are not old enough to drive!";
    }

    return 0;
}