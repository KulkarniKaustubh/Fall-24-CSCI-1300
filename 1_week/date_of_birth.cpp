#include <iostream>

using namespace std;

int main() {
    int month, day, year;

    cout << "Enter the number for the month you were born in: " << endl;
    cin >> month;

    cout << "Enter the number for the day you were born in: " << endl;
    cin >> day;

    cout << "Enter the number for the year you were born in: " << endl;
    cin >> year;

    cout << "You were born on " << month << "/" << day << "/" << year << endl;

    return 0;
}
