#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    // Конструктор по умолчанию
    Rectangle() 
        : width(0.0), height(0.0) {}

    // Конструктор с параметрами
    Rectangle(double w, double h) 
        : width(w), height(h) {}

    // Сеттеры
    void setWidth(double w) {
        width = w;
    }
    void setHeight(double h) {
        height = h;
    }

    // Геттеры
    double getWidth() const {
        return width;
    }
    double getHeight() const {
        return height;
    }

    // Метод area(): возвращает площадь
    double area() const {
        return width * height;
    }

    // Метод show(): выводит ширину, высоту и площадь
    void show() const {
        cout << "Ширина: " << width << endl;
        cout << "Высота: " << height << endl;
        cout << "Площадь: " << area() << endl;
    }
};

int main() {
    // Демонстрация работы класса:

    // 1) По умолчанию
    Rectangle r1;
    cout << "r1 (по умолчанию):" << endl;
    r1.show();
    cout << "-------------------" << endl;

    // 2) С параметрами
    Rectangle r2(4.0, 3.0);
    cout << "r2 (инициализировано 4.0 x 3.0):" << endl;
    r2.show();
    cout << "-------------------" << endl;

    // 3) Изменим размеры через сеттеры и покажем снова
    r2.setWidth(5.5);
    r2.setHeight(2.2);
    cout << "r2 (после изменений 5.5 x 2.2):" << endl;
    r2.show();

    return 0;
}