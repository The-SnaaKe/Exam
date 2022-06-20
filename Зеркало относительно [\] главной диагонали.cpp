#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "RUS");
    int i, j, m, n;
    cout << "Введи количество столбцов : "; cin >> m;
    cout << "Введи количество строк : "; cin >> n;
    int buff;

    int** arr = new int* [m];

    for (i = 0; i < m; i++) {
        arr[i] = new int[n];
        for (j = 0; j < n; j++) {
            arr[i][j] = rand() % 24 - 16; // [-16;23]
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "После сортировки: \n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {

            buff = arr[i][j];
            arr[i][j] = arr[j][i]; // Относительно главной диагонали
            arr[j][i] = buff; 

            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
