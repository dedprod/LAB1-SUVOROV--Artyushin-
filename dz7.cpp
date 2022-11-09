#include <iostream>
#include <cmath>

double a = 0;
double b = 0;
double c = 0;
double D = 0;
double x1 = 0;
double x2 = 0;

void uravn(){
    
    D = pow(b,2) - 4*a*c;
    
    if (D >= 0) {
        x1 = ((-b + sqrt(D))/2*a);
        x2 = ((-b - sqrt(D))/2*a);
        if ((a != 0) & (b != 0)) {
            if (D == 0){
                std::cout << "Корень уравнения: " << x2;
            }else {
                std::cout << "Первый корень: " << x1 << std::endl;
                std::cout << "Второй корень: " << x2;
            }
        }else {
            std::cout << "Введены неверные данные";
        }
    }else {
        std::cout << "Дискриминант меньше нуля:(";
    }
}

int main(){
    
std::cout << "Уравнение вида: ax^2+bx+c=0 " <<std::endl;
std::cout << "Веедите коэффициент а ";
std::cin >> a;

std::cout << "Веедите коэффициент b ";
std::cin >> b;

std::cout << "Веедите коэффициент c ";
std::cin >> c;

uravn();

return 0;

}
