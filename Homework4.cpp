#include <iostream>
using namespace std;

int main() {
    // Запрос числа с плавающей точкой
    double x;
    cout << "Введите число: ";
    cin >> x;

    // 1) Вывести как double
    cout << "Как double: " << x << endl;

    // 2) Привести к int и вывести
    int xi = static_cast<int>(x);
    cout << "Как int: " << xi << endl;

    // 3) Привести к bool и вывести с сообщением
    bool b = static_cast<bool>(x);
    // включаем вывод true/false вместо 1/0
    cout << boolalpha;
    cout << "Число не равно 0? " << b << endl;

    return 0;
}