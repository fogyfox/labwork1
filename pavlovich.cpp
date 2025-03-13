#include <iostream>
#include <cmath> // Для функции sqrt

class Rectangle {
private:
    double width;
    double height;

public:
    // Инициализация ширины и высоты
    Rectangle(double w, double h) : width(w), height(h) {}

    // Вычисление периметра
    double calculatePerimeter() {
        return 2 * (width + height);
    }

    // Вычисление площади
    double calculateArea() {
        return width * height;
    }

    // Вычисление длины диагонали
    double calculateDiagonal() {
        return sqrt(width * width + height * height);
    }
};

int main() {
    double width, height;

    // Ввод ширины и высоты
    std::cout << "Введите ширину прямоугольника: ";
    std::cin >> width;
    std::cout << "Введите высоту прямоугольника: ";
    std::cin >> height;

    Rectangle rect(width, height);

    // Вывод результатов
    std::cout << "Периметр прямоугольника: " << rect.calculatePerimeter() << std::endl;
    std::cout << "Площадь прямоугольника: " << rect.calculateArea() << std::endl;
    std::cout << "Длина диагонали прямоугольника: " << rect.calculateDiagonal() << std::endl;

    return 0;
}
