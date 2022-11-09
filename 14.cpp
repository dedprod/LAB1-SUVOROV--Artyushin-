#include <iostream>
#include <cmath>
using namespace std;
int dsum = 1000;
int dur = 0;
double day = 0;
int sum = 0;
double coff = 0.8;
int a = 0;

void rem(){
    while(day!=a){
            if(((day/6) == round(day/6))| ((day/7) == round(day/7))){
                sum=sum+dsum*coff;
            }
            else{
                sum=sum+dsum;
            }
            day=day+1;
        }
        std::cout << "Сумма равна: " << sum << std::endl;
}

int main()
{
    std::cout << "Введите продолжительность переговоров." << std::endl;
    std::cin >> dur;
    std::cout << "Введите день недели." << std::endl;
    std::cin >> day;
    a = day + dur;
    if ((dur > 0) & (day > 0) & (day < 8))
    {
        rem();
    }
    else
    {
        std::cout << "Введены некоректные данные" << std::endl;
    }

    return 0;
}