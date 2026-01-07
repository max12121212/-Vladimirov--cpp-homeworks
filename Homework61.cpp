#include <iostream>
#include <cstdlib>   // для rand(), srand()
#include <ctime>     // для time()
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    // Инициализируем генератор случайных чисел
    srand(static_cast<unsigned>(time(nullptr)));

    // Заполняем массив случайными числами в диапазоне [0, 99]
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 100;
    }

    // Выводим элементы массива
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << (i + 1 < SIZE ? " " : "\n");
    }

    return 0;
}