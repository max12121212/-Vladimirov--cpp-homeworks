#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Фиксированные параметры окружности
    const double xc = 2.0;
    const double yc = -1.0;
    const double r  = 5.0;

    // Ввод координат точки
    double x, y;
    cout << "Введите координаты точки:\n";
    cout << "x = "; 
    if (!(cin >> x)) {
        cerr << "Некорректный ввод\n";
        return 1;
    }
    cout << "y = "; 
    if (!(cin >> y)) {
        cerr << "Некорректный ввод\n";
        return 1;
    }

    // Вычисляем расстояние в квадрате
    double dx = x - xc;
    double dy = y - yc;
    double dist2 = dx*dx + dy*dy;
    double r2 = r * r;

    // Сравниваем с радиусом
    const double EPS = 1e-9;
    if (dist2 + EPS < r2) {
        cout << "Точка внутри окружности\n";
    }
    else if (fabs(dist2 - r2) <= EPS) {
        cout << "Точка на границе окружности\n";
    }
    else {
        cout << "Точка вне окружности\n";
    }

    return 0;
}