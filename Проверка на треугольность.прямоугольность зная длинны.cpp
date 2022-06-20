#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int z;
    cin >> z;
    switch (z) {
    case 1:
        double a, b, c;
        cout << "Вводи длинны сторон треугольника \n";
        cin >> a;
        cin >> b;
        cin >> c;
        if (a < b + c && b < a + c && c < a + b)
            cout << "С такими длинами составить треугольник - Можно\n";
        else
            cout << "С такими длинами составить треугольник - Нельзя\n";
        if (pow(c, 2) == pow(a, 2) + pow(b, 2)) {
            cout << "\tЭто прямоугольный треугольник\n";
        }
        else if (pow(c, 2) < pow(a, 2) + pow(b, 2)) {
            cout << "\tЭто остроугольный треугольник\n";
        }
        else if (pow(c, 2) > pow(a, 2) + pow(b, 2)) {
            cout << "\tЭто тупоугольный треугольник\n";
        }
        break;
    case 2:
        cout << "Вводи длинны сторон прямоугольника \n";
        double d;
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        if ((a == b) && (c == d))
            cout << "С такими длинами составить прямоугольник - Можно\n";
        else if ((a == c) || (b == d))
            cout << "С такими длинами составить прямоугольник - Можно\n";
        else if ((a == d) && (b == c))
            cout << "С такими длинами составить прямоугольник - Можно\n";
        else
            cout << "С такими длинами составить прямоугольник - Нельзя\n";
        break;
    }
    system("pause");
}
