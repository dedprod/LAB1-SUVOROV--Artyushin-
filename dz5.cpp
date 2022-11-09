#include <iostream>
#include <cmath>

double x = 0;
double y = 0;
double r = 0;
double f = 0;

void koordin(){
    
    r = sqrt(pow(x,2)+pow(y,2));
    f = cos(x/r);
    std::cout << "Полярные координаты: (" << r << ","<< f << ")";
    
}

int main(){
    
    std::cout << "Введите координату X ";
    std::cin >> x;
    
    std::cout << "Введите координату Y ";
    std::cin >> y;
    
    koordin();
    
return 0;
}
    