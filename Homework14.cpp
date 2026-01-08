#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Введите количество строк: ";
    if (!(cin >> n) || n < 0) {
        cerr << "Неверное количество\n";
        return 1;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> strs(n);
    cout << "Введите " << n << " строк(и):\n";
    for (int i = 0; i < n; ++i) {
        getline(cin, strs[i]);
    }

    // Формируем булев массив: true, false, true, false, ...
    vector<bool> flags(n);
    for (int i = 0; i < n; ++i) {
        flags[i] = (i % 2 == 0);
    }

    // Выводим результат
    cout << "Булевый массив:\n";
    for (int i = 0; i < n; ++i) {
        cout << (flags[i] ? "true" : "false");
        if (i + 1 < n) cout << ' ';
    }
    cout << '\n';

    return 0;
}