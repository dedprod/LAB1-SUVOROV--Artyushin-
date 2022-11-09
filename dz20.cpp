#include <iostream>
 int a = 0;
 int b = 0;
 int c = 0;
 int d = 0;

 void check(){
    if (((a <= c) & (b <= d)) || ((a <= d) & (b <= c))){
        std::cout << "Да, может";
    }else{
        std::cout << "Нет, не может";
    }
 }

int main () {
    
    std::cout << "Введите первую сторону первого прямоугольника a " << std::endl;
    
    std::cin >> a;
    
    std::cout << "Введите вторую сторону первого прямоугольника b " << std::endl;
    
    std::cin >> b;
    
    std::cout << "Введите первую сторону второго прямоугольника c " << std::endl;
    
    std::cin >> c;
    
    std::cout << "Введите вторую сторону второго прямоугольника d " << std::endl;
    
    std::cin >> d;
    
    check();
    return 0;
}