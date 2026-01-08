#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// Преобразует римское число в целое
int romanToInt(const string &s) {
    static const unordered_map<char,int> value = {
        {'I', 1},   {'V', 5},
        {'X', 10},  {'L', 50},
        {'C', 100}, {'D', 500},
        {'M', 1000}
    };
    
    int result = 0;
    int n = s.size();
    
    for(int i = 0; i < n; ++i) {
        int v = value.at(s[i]);
        // Если следующий символ есть и его значение больше текущего —
        // вычитаем, иначе — добавляем
        if (i + 1 < n && value.at(s[i+1]) > v)
            result -= v;
        else
            result += v;
    }
    
    return result;
}

int main() {
    string s;
    cout << "Введите римское число: ";
    if (!(cin >> s)) {
        cerr << "Ошибка ввода\n";
        return 1;
    }
    
    int ans = romanToInt(s);
    cout << "Целое число: " << ans << "\n";
    return 0;
}