#include <iostream>
using namespace std;

// Функция, возвращающая квадрат числа
int square(int x) {
    return x * x;
}

int main() {
    int x;
    cout << "Введите число: ";
    if (!(cin >> x)) {
        cerr << "Некорректный ввод\n";
        return 1;
    }
    
    int result = square(x);
    cout << "Квадрат: " << result << endl;
    return 0;
}