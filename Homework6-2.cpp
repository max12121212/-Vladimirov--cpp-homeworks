#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 3;
    int a[ROWS][COLS];
    int value = 1;
    int sum = 0;

    // Заполнение массива числами от 1 до 9
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            a[i][j] = value;
            value++;
        }
    }

    // Вывод элементов массива
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << a[i][j] << " ";
            sum += a[i][j];
        }
        cout << endl;
    }

    // Вывод суммы элементов
    cout << "Сумма элементов: " << sum << endl;

    return 0;
}