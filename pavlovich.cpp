#include <iostream>
#include <cmath>

int main() {
    double a, b;

    // Ввод длин сторон прямоугольника
    std::cout << "Введите длину стороны a: ";
    std::cin >> a;
    std::cout << "Введите длину стороны b: ";
    std::cin >> b;

    // Функция для вычисления периметра прямоугольника
    double rectanglePerimeter(double a, double b); {
        return 2 * (a + b);
    }

    // Функция для вычисления площади прямоугольника
    double rectangleArea(double a, double b); {
        return a * b;
    }

    // Функция для вычисления диагонали прямоугольника
    double rectangleDiagonal(double a, double b); {
        return sqrt(a * a + b * b);
    }

    double side1, side2;

    std::cout << "\n--- Прямоугольник ---" << std::endl;

    std::cout << "Введите длину стороны a прямоугольника: ";
    std::cin >> side1;
    std::cout << "Введите длину стороны b прямоугольника: ";
    std::cin >> side2;

    // Вычисление параметров прямоугольника
    double rectanglePerimeter = rectanglePerimeter(side1, side2);
    double rectangleArea = rectangleArea(side1, side2);
    double rectangleDiagonal = rectangleDiagonal(side1, side2);

    std::cout << "Периметр прямоугольника: " << rectanglePerimeter << std::endl;
    std::cout << "Площадь прямоугольника: " << rectangleArea << std::endl;
    std::cout << "Длина диагонали прямоугольника: " << rectangleDiagonal<< std::endl;

    return 0;
}
