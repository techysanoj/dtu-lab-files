#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int minVal, maxVal;
    cout << "Enter the minimum value: ";
    cin >> minVal;
    cout << "Enter the maximum value: ";
    cin >> maxVal;

    int testValues[5] = { minVal, minVal + 1, (minVal + maxVal) / 2, maxVal - 1, maxVal };

    cout << "-------------------------------------------------------------" << endl;
    cout << "Test Case | Variable 1 | Variable 2 | Variable 3 | Expected Max" << endl;
    cout << "-------------------------------------------------------------" << endl;

    int testCase = 1;
    for (int a : testValues) {
        for (int b : testValues) {
            for (int c : testValues) {
                int maxNum = max(a, max(b, c));

                cout << setw(10) << testCase << setw(13) << a << setw(13) << b << setw(13) << c << setw(15) << maxNum << endl;
                testCase++;
            }
        }
    }

    cout << "-------------------------------------------------------------" << endl;

    return 0;
}
