#include <iostream>
#include <cmath>
using namespace std;
double arg1 = 0;
double arg2 = 0;
int calc(int x){
    int sum =0;
    while(x>0){
    sum = sum + (x%10);
    x=x/10;
    }
    return sum;
}
int main()
{
    double num = 0;
    std::cout << "Введите 6-значное число" << std::endl;
    std::cin >> num;
    double var = num / 100000;
    if ((var > 0) & (var < 10))
    {
        arg1 =(int) num / 1000;
        arg2 =(int) num - arg1 * 1000;
        if(calc(arg1)==calc(arg2)){
            std::cout<<"Билет счастливый, сумма: "<<calc(arg1);
        }
        else{
            std::cout<<"Билет не счастливый";
        }
    }else
    {
        std::cout << "Введены некоректные данные" << std::endl;
    }
    return 0;
}