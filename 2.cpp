#include <iostream>
#include <cmath>
using namespace std;
double PI=3.1415926;
double r = 0;
double s;

void calc(){
    if (r > 0 ) {
    s= r*PI*r;
    std::cout <<"Площадь без округлений: " << s << std::endl;
    std::cout <<"Площадь c округлением: " << round(s)<< std::endl;
    }
    else
    {
        std::cout <<"Радиус введен неправильно, перезапустите программу." << std::endl ;
    }
}

int main(){
    std::cout << "Введите радиус" << std::endl;
    std::cin >> r;
    calc();
    return 0;
}