#include <iostream>

double s = 0;
int m = 0;
int h = 0;

void vremyu(){
    
    h = s/3600;
    m = s/60;

}

int main(){
    
    std::cout << "Введите количество секунд ";
    std::cin >> s;
    
    vremyu();
    
    std::cout << "Целых часов " << h <<std::endl;
    std::cout << "Целых минут " << m;
    
}
