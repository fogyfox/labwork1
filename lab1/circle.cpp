#include <iostream>
#include <cmath>
#include <stdio.h>
#include <locale.h>

const double pi = 3.14159;

double calcCircLen(double rad) {
return 2*pi*rad;
}

double calcCircArea(double rad) {
return pi*rad*rad;
}

double calcSectorArea(double rad, double angle) {
return (angle/360)*pi*rad*rad;
}

int main() {
setlocale(LC_ALL, "Russian");
double rad, angle;

std::cout << "Введите радиус окружности: ";
std::cin >> rad;
std::cout << "Длина окружности: " << calcCircLen(rad) << std::endl;
std::cout << "Площадь круга: " << calcCircArea(rad) <<std::endl;

std::cout << "Введите угол сектора в градусах: ";
std::cin >> angle;
std::cout << "Площадь кругового сектора: " << calcSectorArea(rad, angle) << std::endl;

return 0;
}
