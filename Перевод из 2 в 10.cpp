#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int tenNumber = 0;
	setlocale(LC_ALL, "RUS");
	int n;

	cout << "Введите 2чное число: ";
	cin >> n;
	int twoNumber = n;
	int ost, i = 0;
	while (n != 0)
	{
		ost = n % 10;
		n /= 10;
		tenNumber += ost * pow(2, i);
		++i;
	}
	cout << twoNumber << " в десятиной = " << tenNumber << " в двоичной\n";
}
