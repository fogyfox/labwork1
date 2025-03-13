#include <iostream>
#include <cmath> // ��� ������� sqrt

class Rectangle {
private:
    double width;
    double height;

public:
    // ������������� ������ � ������
    Rectangle(double w, double h) : width(w), height(h) {}

    // ���������� ���������
    double calculatePerimeter() {
        return 2 * (width + height);
    }

    // ���������� �������
    double calculateArea() {
        return width * height;
    }

    // ���������� ����� ���������
    double calculateDiagonal() {
        return sqrt(width * width + height * height);
    }
};

int main() {
    double width, height;

    // ���� ������ � ������
    std::cout << "������� ������ ��������������: ";
    std::cin >> width;
    std::cout << "������� ������ ��������������: ";
    std::cin >> height;

    Rectangle rect(width, height);

    // ����� �����������
    std::cout << "�������� ��������������: " << rect.calculatePerimeter() << std::endl;
    std::cout << "������� ��������������: " << rect.calculateArea() << std::endl;
    std::cout << "����� ��������� ��������������: " << rect.calculateDiagonal() << std::endl;

    return 0;
}