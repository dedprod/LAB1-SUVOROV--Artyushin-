#include <cstdlib>
#include <iostream>
#include <ctime>

int x = 0;
int y = 0;
int r = 0;
int p = 0;

void randoma(){
    
    srand(time(nullptr)); 
    r = rand();
    
    for (int n=0; n != 1; ++n) {
        x = 10;
        while(x > 9) 
            x = 1 + std::rand()/((RAND_MAX + 1u)/9);  
        std::cout << x << ' ';
    }
    for (int n=0; n != 1; ++n) {
        y = 10;
        while(y > 9) 
            y = 1 + std::rand()/((RAND_MAX + 1u)/9);  
        std::cout << y << ' ' << std::endl;
    }
    
}

void sravn(){
    
   if (p == x*y){
        std::cout << "Верно";
    }
    else{
        std::cout << "Неверно";
    } 
    
}
 
int main() {
    
    std::cout << "Вам даны два числа: ";
    randoma();
    
    std::cout << "Напишите их произведение ";
    std::cin >> p;
    
    sravn();
    
    return 0;
    
}