#include <iostream>
#include <cmath>
using namespace std;
double a1 = 0;
double a2 = 0;
double a3 = 0;
double b1 = 0;
double b2 = 0;
double b3 = 0;
double c1 = 0;
double c2 = 0;
double c3 = 0;
int med(double a, double b, double c){
    a2=sqrt(2*(pow(a1,2))+2*(pow(b1,2))-pow(c1,2))/2;
   b2=sqrt(2*(pow(b1,2))+2*(pow(c1,2))-pow(a1,2))/2;
   c2=sqrt(2*(pow(c1,2))+2*(pow(a1,2))-pow(b1,2))/2;
}
int med2(double q, double w, double e){
    a3=sqrt(2*(pow(a2,2))+2*(pow(b2,2))-pow(c2,2))/2;
   b3=sqrt(2*(pow(b2,2))+2*(pow(c2,2))-pow(a2,2))/2;
   c3=sqrt(2*(pow(c2,2))+2*(pow(a2,2))-pow(b2,2))/2;
}
int main(){
    std::cout << "Введите первую сторону треугольника." << std::endl;
    std::cin >> a1;
    std::cout << "Введите вторую сторону треугольника." << std::endl;
    std::cin >> b1;
    std::cout << "Введите третью сторону треугольника." << std::endl;
    std::cin >> c1;
    if ((a1>0) & (b1>0) & (c1>0)){
        med(a1,b1,c1);
        std::cout<<"Полученные медианы:("<<a2<<", "<<b2<<", "<<c2<<")";
        if (((a2+b2)>c2) & ((a2+c2)>b2) & ((c2+b2)>a2)){
            med2(a2,b2,c2);
            std::cout<<"Полученные медианы:("<<a3<<", "<<b3<<", "<<c3<<")";
            }else{
        std::cout<<"Из полученных медиан невозможно построить треугольник"<<std::endl;
        }
    } else {
        std::cout << "Введены некоректные данные" << std::endl;
    }
    return 0;
}