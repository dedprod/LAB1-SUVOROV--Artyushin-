#include <iostream>

int n = 0;

void vremyu(){
    
    if ((n > 0) & (n <= 12)){
        if ((n == 12) || (n == 1) || (n == 2)){
            std::cout << "Время года - зима" << std::endl;
            if (n == 12){
                std::cout << "Месяц - декабрь";
            }
            if (n == 1){
                std::cout << "Месяц - январь";
            }
            if (n == 2){
                std::cout << "Месяц - февраль";
            }
        }
        
        if ((n == 3) || (n == 4) || (n == 5)){
            std::cout << "Время года - весна" << std::endl;
            if (n == 3){
                std::cout << "Месяц - март";
            }
            if (n == 4){
                std::cout << "Месяц - апрель";
            }
            if (n == 5){
                std::cout << "Месяц - май";
            }
        }
        
        if ((n == 6) || (n == 7) || (n == 8)){
            std::cout << "Время года - лето" << std::endl;
            if (n == 6){
                std::cout << "Месяц - июнь";
            }
            if (n == 7){
                std::cout << "Месяц - июль";
            }
            if (n == 8){
                std::cout << "Месяц - август";
            }
        }
        
        if ((n == 9) || (n == 10) || (n == 11)){
            std::cout << "Время года - осень" << std::endl;
            if (n == 9){
                std::cout << "Месяц - сентябрь";
            }
            if (n == 10){
                std::cout << "Месяц - октябрь";
            }
            if (n == 11){
                std::cout << "Месяц - ноябрь";
            }
        }
        
    }
    else{
        std::cout << "Такого месяца не существует ";
    }
}
    
 
int main() {
    
    std::cout << "Введите номер месяца ";
    std::cin >> n;
    
    vremyu();
    
}