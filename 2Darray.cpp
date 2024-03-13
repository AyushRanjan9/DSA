#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int matrix[3][3];
    cout << "Enter your elements:" << endl;

    // Input matrix elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Print the matrix elements
    cout << "Matrix you entered:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
