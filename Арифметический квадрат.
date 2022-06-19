#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    int i, j, m, n;
    cout << "Введи количество столбцов : "; cin >> m;
    cout << "Введи количество строк : "; cin >> n;
    m += 1;

    int** arr = new int* [m];
    for (i = 0; i < m; i++) {
        arr[i] = new int[n];
        arr[i][0] = 1;
    }

    for (j = 0; j < n; j++) {
        arr[0][j] = 1;
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            arr[i + 1][j + 1] = arr[i + 1][j] + arr[i][j + 1];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
