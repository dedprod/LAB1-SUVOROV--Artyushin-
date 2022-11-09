#include <iostream>
using namespace std;

int num =0;
int a =0;
int sum = 0;
void calc(){
     if ((((num/1000) > -10)&((num/1000) < 0)) ||(((num/1000) > 0)&((num/1000) < 10))){
        a=num;
        if (a>0){
        while (a>0){
            sum= sum + a%10;
            a=a/10;
        }
        }
        else{
            while (a<0){
            sum= sum + a%10;
            a=a/10;
        }
        }
        std::cout <<"Cумма равна: " << sum << std::endl;
    }
    else{
        std::cout <<"Число введено неправильно, перезапустите программу." << std::endl;
    }
}
int main(){
    std::cout << "Введите число" << std::endl;
    std::cin >> num;
    calc();
     return 0;
}