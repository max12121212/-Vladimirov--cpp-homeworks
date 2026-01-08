#include <iostream>
using namespace std;

// Рекурсивная функция, возвращающая n!
long long factorial(int n) {
    if (n <= 1) 
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Введите число: ";
    if (!(cin >> n) || n < 0) {
        cerr << "Некорректный ввод (нужено неотрицательное целое)\n";
        return 1;
    }
    
    cout << "Факториал: " << factorial(n) << endl;
    return 0;
}