#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int binaryNumber = 0;
	int ost, i = 1, step = 1;
	setlocale(LC_ALL, "RUS");
	int n;

	cout << "Введите 10чное число: ";
	cin >> n;
	int tenNumber = n;
	while (n != 0)
	{
		ost = n % 2;
		cout << "Шаг " << step++ << ": " << n << "/2, Остаток = " << ost << ", Коэффициент = " << n / 2 << endl;
		n /= 2;
		binaryNumber += ost * i;
		i *= 10;
	}
	cout << tenNumber << " в десятиной = " << binaryNumber << " в двоичной\n";
}
