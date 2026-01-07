#include <iostream>
using namespace std;

int main() {
    // Объявляем переменные для длины и ширины
    int length, width;
    
    // Запрашиваем у пользователя данные
    cout << "Введите длину: ";
    cin >> length;
    
    cout << "Введите ширину: ";
    cin >> width;
    
    // Вычисляем периметр и площадь
    int perimeter = 2 * (length + width);
    int area = length * width;
    
    // Выводим результаты
    cout << "Периметр: " << perimeter << endl;
    cout << "Площадь: " << area << endl;
    
    return 0;
}