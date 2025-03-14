#include <iostream>
#include <cmath>

// Функция для вычисления периметра трапеции
double trapezoidPerimeter(double a, double b, double c, double d) {
    return a + b + c + d;
}

// Функция для вычисления площади трапеции
double trapezoidArea(double a, double b, double h) {
    return 0.5 * (a + b) * h;
}

// Функция для вычисления средней линии трапеции
double trapezoidMidline(double a, double b) {
    return 0.5 * (a + b);
}


int main() {
    double a, b, c;

    // Ввод длин сторон треугольника
    std::cout << "Введите длину стороны a треугольника: ";
    std::cin >> a;
    std::cout << "Введите длину стороны b треугольника: ";
    std::cin >> b;
    std::cout << "Введите длину стороны c треугольника: ";
    std::cin >> c;

    // Проверка на существование треугольника
    if (a + b <= c || a + c <= b || b + c <= a) {
        std::cout << "Треугольник с такими сторонами не существует!" << std::endl;
        return 1;
    }

    // Вычисление периметра
    double perimeter = a + b + c;
    std::cout << "Периметр треугольника: " << perimeter << std::endl;

    // Вычисление площади по формуле Герон
    double p = perimeter / 2; // Полупериметр
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    std::cout << "Площадь треугольника: " << area << std::endl;

    // Проверка на равнобедренность
    if (a == b || a == c || b == c) {
        std::cout << "Треугольник является равнобедренным." << std::endl;
    } else {
        std::cout << "Треугольник не является равнобедренным." << std::endl;
    }

    // Трапеция
    double base1, base2, side1, side2, height;

    std::cout << "\n--- Трапеция ---" << std::endl;

    std::cout << "Введите длину основания a трапеции: ";
    std::cin >> base1;
    std::cout << "Введите длину основания b трапеции: ";
    std::cin >> base2;
    std::cout << "Введите длину стороны c трапеции: ";
    std::cin >> side1;
    std::cout << "Введите длину стороны d трапеции: ";
    std::cin >> side2;
    std::cout << "Введите высоту h трапеции: ";
    std::cin >> height;
    //трапеции Проверка на существование
    if (base1<= 0 || base2<=0 || side1<=0 || side2<=0 || height <=0 ){
      std::cout << "трапеция не сущ" << std::endl;
      return 1;
    
    }
  
    if ( height == 0){
      std::cout << "трапеция не сущ" << std::endl;
      return 0;
    
    }
    if (base1 + base2 > side1+side1 ){
      std::cout << "трапеция не сущ" << std::endl;
      return 1;
      
    
    }
    if ((hight <= side1 ||  hight <= side2){
        std::cout << "трапеция не сущ" << std::endl;
        return 1;
    }
    
   if ((base1 + base2) || side1<=0 || side2<=0 || height <=0 ){
        std::cout << "трапеция не сущ" << std::endl;
        return 1;
    }
    // Вычисление параметров трапеции
    double trapPerimeter = trapezoidPerimeter(base1, base2, side1, side2);
    double trapArea = trapezoidArea(base1, base2, height);
    double trapMidline = trapezoidMidline(base1, base2);

    std::cout << "Периметр трапеции: " << trapPerimeter << std::endl;
    std::cout << "Площадь трапеции: " << trapArea << std::endl;
    std::cout << "Длина средней линии трапеции: " << trapMidline << std::endl;

    return 0;
}
