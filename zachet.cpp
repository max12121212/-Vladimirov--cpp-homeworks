#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    // Считываем размер массива
    cin >> N;
    vector<int> a(N);
    // Считываем элементы массива
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }
    int x;
    // Считываем искомое число
    cin >> x;

    int lastIndex = -1;
    // Проходим по всем элементам и обновляем индекс при совпадении
    for (int i = 0; i < N; ++i) {
        if (a[i] == x) {
            lastIndex = i;
        }
    }

    // Выводим результат
    cout << lastIndex << endl;
    return 0;
}