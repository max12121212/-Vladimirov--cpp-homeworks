#include <iostream>
using namespace std;

int main() {
    // Запрос числа у пользователя
    double x;
    cout << "Введите число: ";
    cin >> x;

    // Проверка знака
    if (x > 0) {
        cout << "Число положительное" << endl;
    }
    else if (x < 0) {
        cout << "Число отрицательное" << endl;
    }
    else {
        cout << "Число равно нулю" << endl;
    }

    return 0;
}