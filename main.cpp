#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "Enter Size of Matrix (nxn): ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter Elements of the Matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << endl << n << "x" << n << " Matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "[";
        for (int j = 0; j < n; ++j) {
            cout << " " << matrix[i][j];
            if (j < n - 1) cout << ",";
        }
        cout << " ]" << endl;
    }

    return 0;
}
