#include <iostream>
using namespace std;

// Функция увеличивает значение x на 10, возвращать ничего не нужно
void increase(int &x) {
    x += 10;
}

int main() {
    int num;
    cout << "Введите число: ";
    if (!(cin >> num)) {
        cerr << "Некорректный ввод\n";
        return 1;
    }

    // Увеличиваем число на 10
    increase(num);

    // Выводим обновлённое значение
    cout << "Новое значение: " << num << endl;
    return 0;
}