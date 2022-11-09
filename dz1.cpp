#include <iostream>

int main()
{
std::cout << "Введите первое основание b1 ";
double b1 = 0;
std::cin >> b1;

std::cout << "Введите второе основание b2 ";
double b2 = 0;
std::cin >>b2;

std::cout << "Введите высоту h ";
double h = 0;
std::cin >> h;

double S = ((b1 + b2) / 2) * h;

if ((b1 > 0) & (b2 > 0) & (h > 0)) {
    std::cout << "Площадь трапеции равна " << S;
}else {
    std::cout << "Введены неверные данные";
}
return 0;
}