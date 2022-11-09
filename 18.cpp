#include <iostream>
#include <cmath>
using namespace std;
int palcheck(int x){
    int arg1=0;
    int arg2=0;
    int var = 0;
    arg1 = x/100;
    arg2 = x%100;
    var= (arg2%10)*10+arg2/10;
    if (arg1 == var){
        std::cout <<"Число является палиндромом.";
    }else{
        std::cout <<"Число не является палиндромом.";
    }
}
int main(){
    int num = 0;
    std::cout << "Введите 4-значное число" << std::endl;
    std::cin >> num;
    double var = num / 1000;
    if ((var > 0) & (var < 10))
    {palcheck(num);
    }else
    {
        std::cout << "Введены некоректные данные" << std::endl;
    }
    return 0;
}