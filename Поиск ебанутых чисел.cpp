#include <iostream>

using namespace std;

int factorial(short number) {
    int fact = 1;
    for (int counter = 1; counter <= number; counter++)
        fact *= counter;

    return fact;
}

long count_sum(int number) {
    int digit = 0;
    int sum_of_digits = 0;

    while (number) {
        digit = number % 10;
        sum_of_digits += factorial(digit);
        number /= 10;
    }

    return sum_of_digits;
}

int main()
{
    for (int number = 0; number < INT64_MAX; number++)
    {
        if (number == count_sum(number))
        {
            cout << number << endl;
        }

    }

    system("pause");
}
