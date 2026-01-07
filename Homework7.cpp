#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    // Отрицательные числа и числа, оканчивающиеся на ноль (кроме самого нуля) — не палиндромы
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;

    int original = x;
    int reversed = 0;

    // Переворачиваем число по цифрам
    while (x > 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return reversed == original;
}

int main() {
    int x;
    cout << "Введите x: ";
    if (!(cin >> x)) {
        cout << "Некорректный ввод\n";
        return 1;
    }

    bool result = isPalindrome(x);
    // Выводим "true" или "false"
    cout << boolalpha << result << endl;
    return 0;
}