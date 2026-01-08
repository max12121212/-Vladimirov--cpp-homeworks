#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Функция проверки валидности скобочной последовательности
bool isValid(const string &s) {
    stack<char> st;
    for (char c : s) {
        switch (c) {
            case '(':
            case '[':
            case '{':
                st.push(c);
                break;
            case ')':
                if (st.empty() || st.top() != '(') return false;
                st.pop();
                break;
            case ']':
                if (st.empty() || st.top() != '[') return false;
                st.pop();
                break;
            case '}':
                if (st.empty() || st.top() != '{') return false;
                st.pop();
                break;
            default:
                // недопустимый символ
                return false;
        }
    }
    // валидно, если после обработки всех символов стек пуст
    return st.empty();
}

int main() {
    string s;
    cout << "Введите строку скобок: ";
    if (!(cin >> s)) {
        cerr << "Ошибка ввода\n";
        return 1;
    }
    bool ok = isValid(s);
    cout << (ok ? "YES" : "NO") << endl;
    return 0;
}