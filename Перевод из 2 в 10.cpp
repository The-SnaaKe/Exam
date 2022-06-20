#include <iostream>
#include <cmath>

using namespace std;

int convert2to10(int n)
{
    int decimalNumber = 0, i = 0, ost;
    while (n != 0)
    {
        ost = n % 10;
        n /= 10;
        decimalNumber += ost * pow(2, i);
        ++i;
    }
    return decimalNumber;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int n;

    cout << "Введите 2ичное число: ";
    cin >> n;

    cout << n << " в двоичной = " << convert2to10(n) << " в десятичной \n";
    system("pause");
}
