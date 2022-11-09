#include <iostream>
#include <cmath>
using namespace std;
int a;
int b;
int c;
int main(){
std::cout << "Введите первую сторону треугольника." << std::endl;
    std::cin >> a;
    std::cout << "Введите вторую сторону треугольника." << std::endl;
    std::cin >> b;
    std::cout << "Введите третью сторону треугольника." << std::endl;
    std::cin >> c;
    if((a>0)&(b>0)&(c>0)){
    if ((a == b) | (b == c) | (a ==c)){
        std::cout << "Треугольник равнобедренный.";
    }else{
        std::cout << "Треугольник не равнобедренный.";
    }
}else{
std::cout << "Введены некоректные данные" << std::endl;
}
    return 0;
}
