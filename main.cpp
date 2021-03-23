#include <iostream>

using namespace std;

// Task 1
void isInRange() {
    int a, b;
    cout << "enter two numbers separated by a space:\n";
    cin >> a >> b;
    cout << ((a + b >= 10 && a + b <= 20) ? "true" : "false") << endl;
}

// Task 2
void isTen() {
    const int a = 5, b = 10;
    cout << ((a == 10 || b == 10 || a + b == 10) ? "true" : "false") << endl;
}

// Task 3
void oddList() {
    const int SIZE = 50;
    cout << "Your odd numbers: ";
    for (int i = 1; i <= SIZE; ++i) {
        if (i % 2) cout << i << " ";
    }
    cout << '\n';
}

// Task 4
bool isPrimeNumber(const int a) {
    if (a < 2) return false;
    for (int i = 1, count = 0; i < a; ++i) {
        if (a % i == 0) count++;
        if (count > 1) return false;

    }
    return true;
}

// Task 5
bool isLeapYear(const int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}


int main() {

    // Task 1
    isInRange();

    // Task 2
    isTen();

    // Task 3
    oddList();

    // Task 4
    isPrimeNumber(53);

    // Task 5
    int year;
    cout << "Enter year:\n";
    cin >> year;
    if (isLeapYear(year))
    {
        cout << "Year is leap" ;
    }
    else
    {
        cout << "Not a leap year" ;
    }
    return 0;
}
