#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Sum: " << endl;
    for (int i = 0; i < 3; i++) {
        int Sum1 = 0;
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
            Sum1 += matrix[i][j];
        }
        cout << " sum of row " << i + 1 << " - " << Sum1 << endl;
    }

    return 0;
}
