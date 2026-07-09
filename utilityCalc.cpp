#include <iostream>
#include <string>
using namespace std;

class UtilityCalculator {
public:
    // 1. Handles two integers
    int calculate(int a, int b) {
        return a + b;
    }

    // 2. Handles two floating-point numbers
    double calculate(double a, double b) {
        return a + b;
    }

    // 3. Handles three integers
    int calculate(int a, int b, int c) {
        return a + b + c;
    }

    // 4. Concatenates strings
    string calculate(string a, string b) {
        return a + b;
    }
};

int main() {
    UtilityCalculator myCalc;

    int a, b, c;
    double x, y;
    string str1, str2;

    // Integer input
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Result: " << myCalc.calculate(a, b) << endl;

    // Double input
    cout << "\nEnter two decimal numbers: ";
    cin >> x >> y;
    cout << "Result: " << myCalc.calculate(x, y) << endl;

    // Three integers input
    cout << "\nEnter three integers: ";
    cin >> a >> b >> c;
    cout << "Result: " << myCalc.calculate(a, b, c) << endl;

    // String input
    cout << "\nEnter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    cout << "Result: " << myCalc.calculate(str1, str2) << endl;

    return 0;
}