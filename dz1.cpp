#include <iostream>
double h = 0;
double b2 = 0;
double b1 = 0;
void calc(){
    double S = ((b1 + b2) / 2) * h;

if ((b1 > 0) & (b2 > 0) & (h > 0)) {
    std::cout << "Площадь трапеции равна " << S;
}else {
    std::cout << "Введены неверные данные";
}
a}
int main()
{
std::cout << "Введите первое основание b1 ";

std::cin >> b1;

std::cout << "Введите второе основание b2 ";

std::cin >>b2;

std::cout << "Введите высоту h ";

std::cin >> h;
calc();
return 0;
}
