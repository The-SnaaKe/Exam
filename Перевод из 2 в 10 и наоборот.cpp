#include <iostream>
#include <cmath>

using namespace std;

void TenToTwo() {
	long long twoNumber = 0;
	long long ost, i = 1, step = 1;
	long long n;

	cout << "Введите 10чное число: ";
	cin >> n;
	auto tenNumber = n;
	while (n != 0)
	{
		ost = n % 2;
		cout << "Шаг " << step++ << ": " << n << "/2, Остаток = " << ost << ", Коэффициент = " << n / 2 << endl;
		n /= 2;
		twoNumber += ost * i;
		i *= 10;
	}
	cout << tenNumber << " в десятиной = " << twoNumber << " в двоичной\n";
}

void TwoToTen() {
	long long tenNumber = 0;
	long long n;

	cout << "Введите 2чное число: ";
	cin >> n;
	auto twoNumber = n;
	long long ost, i = 0;
	while (n != 0)
	{
		ost = n % 10;
		n /= 10;
		tenNumber += ost * pow(2, i);
		++i;
	}
	cout << twoNumber << " в двоичной = " << tenNumber << " в десятиной\n";
}

int main() {
	setlocale(LC_ALL, "RUS");
	char choose;
	cout << "Выберите 's' для перевода в двоичную систему (из десятичной), или выберите d для перевода в десятичную (из двоичной) \t"; cin >> choose;
	switch (choose) {
	case 'd':
		TwoToTen();
		break;
	case 's':
		TenToTwo();
		break;
	}
	system("pause");
}
