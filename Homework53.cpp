#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введите N: ";
    if (!(cin >> N) || N < 1) {
        cout << "Некорректное значение N." << endl;
        return 1;
    }

    cout << "Числа от 1 до " << N << ":" << endl;
    for (int i = 1; i <= N; ++i) {
        cout << i;
        if (i < N) cout << " ";
    }
    cout << endl;

    return 0;
}