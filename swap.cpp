#include <iostream>

using namespace std;

int main() {
    int age;
    string citizen;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter citizen (indian/other): ";
    cin >> citizen;

    if (age >= 18 && citizen == "indian") {
        cout << "Eligible to vote";
    } else {
        cout << "Not eligible to vote";
    }

    return 0;
}
