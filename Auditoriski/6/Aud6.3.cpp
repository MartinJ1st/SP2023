/*
 * Да се напишат соодветни функции за пресметување на дијаметар, периметар и плоштина на круг
 * чиј што радиус се предава како аргумент. Потоа да се напише и програма во која
 * за внесен (од тастатура) радиус ќе се повикаат овие функции за да се пресметаат дијаметарот
 * , периметарот и плоштината на соодветниот круг.
 */
#include <iostream>
#define PI 3.14

double diameter(double radius);
double perimeter(double radius);
double area(double radius);

int main() {
    double radius, D, L, P;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    D = diameter(radius);
    L = perimeter(radius);
    P = area(radius);

    std::cout << "Diameter of the circle = " << D << std::endl;
    std::cout << "Perimeter of the circle = " << L << std::endl;
    std::cout << "Area of the circle = " << P << std::endl;
    return 0;
}

double diameter(double radius) {
    return 2 * radius;
}

double perimeter(double radius) {
    return 2 * radius * PI;
}

double area(double radius) {
    return radius * radius * PI;
}