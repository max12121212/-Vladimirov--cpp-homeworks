#include <iostream>
#include <string>
using namespace std;

bool isIsogram(const string& s) {
    int n = s.length();
    for (int i = 0; i < n; ++i) {
        if (s[i] == ' ') 
            continue;           // пропускаем пробелы
        for (int j = i + 1; j < n; ++j) {
            if (s[j] == ' ') 
                continue;       // пропускаем пробелы
            if (s[i] == s[j]) 
                return false;   // нашли повтор
        }
    }
    return true;                // совпадений не было
}

int main() {
    string line;
    cout << "Введите строку: ";
    getline(cin, line);

    bool result = isIsogram(line);
    cout << boolalpha << result << endl;
    return 0;
}