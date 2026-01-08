#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    // Конструктор по умолчанию
    Rectangle() : width(0.0), height(0.0) {}

    // Конструктор с параметрами
    Rectangle(double w, double h) : width(w), height(h) {}

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

    // Метод show() — выводит ширину и высоту
    void show() const {
        cout << "Ширина: " << width << endl;
        cout << "Высота: " << height << endl;
    }
};

int main() {
    // Демонстрация работы класса:
    Rectangle rect1;             // по умолчанию
    rect1.show();                // Ширина: 0.0, Высота: 0.0

    cout << "----" << endl;

    Rectangle rect2(4.0, 3.0);   // инициализация через конструктор
    rect2.show();                // Ширина: 4.0, Высота: 3.0

    cout << "----" << endl;

    // Изменим поля через сеттеры
    rect2.setWidth(5.5);
    rect2.setHeight(2.2);
    cout << "После изменения:" << endl;
    rect2.show();                // Ширина: 5.5, Высота: 2.2

    return 0;
}