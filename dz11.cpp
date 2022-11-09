#include <iostream>

double s1 = 0;
double s2 = 0;

void skidka(){
    
    if (s1 > 1000){
        s2 = s1*0.9;
        std::cout << "Стоимость с учетом скидки: " << s2;
    }else{
        std::cout << "Скидка не предоставляется ";
    }
    
}

int main(){
    
    std::cout << "Введите стоимость покупки ";
    std::cin >> s1;
    
    skidka();
    
}



    