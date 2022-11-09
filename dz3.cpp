#include <iostream>
#include <cmath>

double a = 0;
double b = 0;
double c = 0;
double s = 0;

void treugol(){
    s = 0.5*a*b;
    c = sqrt(pow(a,2)+pow(b,2));
    if ((a > 0) & (b > 0)) {
        std::cout << "Площадь площадь прямоугольного треугольника " << s <<std::endl;
        std::cout << "Гипотенуза " << c;
        
    }else {
        std::cout << "Введены неверные данные";
    }
}

int main()
{
std::cout << "Введите первый катет a ";
std::cin >> a;

std::cout << "Введите второй катет b ";
std::cin >> b;

treugol();
return 0;
}