#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите строку: ";
    // Считываем всю строку целиком, с пробелами
    getline(cin, s);

    if (!s.empty()) {
        cout << "Первый символ: " << s[0] << endl;
    } else {
        cout << "Строка пуста, первый символ отсутствует." << endl;
    }

    return 0;
}