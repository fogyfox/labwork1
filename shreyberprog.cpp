#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    
    // Ввод длин сторон треугольника
    std::cout << "Введите длину стороны a: ";
    std::cin >> a;
    std::cout << "Введите длину стороны b: ";
    std::cin >> b;
    std::cout << "Введите длину стороны c: ";
    std::cin >> c;
    
    // Проверка на существование треугольника
    if (a + b <= c || a + c <= b || b + c <= a) {
        std::cout << "Треугольник с такими сторонами не существует!" << std::endl;
        return 1;
    }
    
    // Вычисление периметра
    double perimeter = a + b + c;
    std::cout << "Периметр треугольника: " << perimeter << std::endl;
    
    // Вычисление площади по формуле Герона
    double p = perimeter / 2; // Полупериметр
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    std::cout << "Площадь треугольника: " << area << std::endl;
    
    // Проверка на равнобедренность
    if (a == b || a == c || b == c) {
        std::cout << "Треугольник является равнобедренным." << std::endl;
    } else {
        std::cout << "Треугольник не является равнобедренным." << std::endl;
    }
    
    return 0;
}