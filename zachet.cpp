#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Введите размер массива N: ";
    cin >> N;

    // Проверка ограничения
    if (N < 1 || N > 100) {
        cout << "Неверный размер массива" << endl;
        return 1;
    }

    vector<int> a(N);
    cout << "Введите " << N << " целых чисел массива: ";
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    int x;
    cout << "Введите искомое число x: ";
    cin >> x;

    // Линейный поиск
    int index = -1;
    for (int i = 0; i < N; ++i) {
        if (a[i] == x) {
            index = i;
            break;
        }
    }

    // Вывод результата
    cout << index << endl;
    return 0;
}