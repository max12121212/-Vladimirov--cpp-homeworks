#include <iostream>
using namespace std;

int main() {
    // Спросим два числа у пользователя
    cout << "Введите первое число: ";
    double a;
    cin >> a;

    cout << "Введите второе число: ";
    double b;
    cin >> b;

    // Вычислим сумму, разность и произведение
    double sum = a + b;
    double diff = a - b;
    double prod = a * b;

    // Выведем результаты
    cout << "Сумма: " << sum << endl;
    cout << "Разность: " << diff << endl;
    cout << "Произведение: " << prod << endl;

    return 0;
}