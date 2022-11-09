#include <iostream>

int n = 0;
int a = 0;

void kop(){
    
    a = n % 10; 
    
    if ((n >= 1) & (n < 100)){
        
            std::cout << n; 
            
            if ((n == 11) || (n == 12) || (n == 13) || (n == 14) || (n == 15) || (n == 16) || (n == 17) || (n == 18) || (n == 19)){
            std::cout << " копеек";
                
            } else{
                
            switch (a) {
        case 0:
            std::cout << " копеек";
            break;
        case 1:
            std::cout << " копейка";
            break;    
        case 2:
            std::cout << " копейки";
            break;    
        case 3:
            std::cout << " копейки";
            break;    
        case 4:
            std::cout << " копейки";
            break;    
        case 5:
            std::cout << " копеек";
            break;   
        case 6:
            std::cout << " копеек";
            break;    
        case 7:
            std::cout << " копеек";
            break;    
        case 8:
            std::cout << " копеек";
            break;    
        case 9:
            std::cout << " копеек";
            break;    
                }
            }
    }else{
        std::cout << "Введите число в диапозоне от 1 до 99";
    }
}
 
int main () {
    
    std::cout << "Введите число от 1 до 99: ";
    std::cin >> n;
    
    kop();
    
    return 0;
}