#include <iostream>
#include <cmath>
using namespace std;

int convert10To2(int n){
    int binaryNumber = 0;
    int ost, i = 1, step = 1;

    while (n != 0)
    {
        ost = n % 2;
        cout << "Шаг " << step++ << ": " << n << "/2, Остаток = " << ost << ", Коэффициент = " << n / 2 << endl;
        n /= 2;
        binaryNumber += ost * i;
        i *= 10;
    }
    return binaryNumber;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int n, binaryNumber;

    cout << "Введите 10чное число: ";
    cin >> n;
    binaryNumber = convert10To2(n);
    cout << n << " в десятиной = " << binaryNumber << " в двоичной\n";
    system("pause");
}
