#include <cstdlib>
#include <iostream>
#include <ctime>

int D0 = 0;   
int D1 = 0;  
int D2 = 0; 
int x = 0;
int r = 0;

void randoma(){
    
    srand(time(nullptr)); 
    r = rand();
    
    for (int n=0; n != 1; ++n) {
        x = 1000;
        while(x > 999) 
            x = 100 + std::rand()/((RAND_MAX + 100u)/999);  
        std::cout << x << ' ' <<std::endl;
    }
    
}

void number(){
    
    D0 = x % 10;
    D1 = (x % 100) / 10;
    D2 = (x % 1000) / 100;
    
}

void schet(){
    
    if ((D2 + D1 +  D0) % 7 == 0){
      std::cout << "Число " << x << " кратно семи";
    }else{
      std::cout << "Число " << x << " не кратно семи";
    }
  
}
 
int main() {
 
    randoma();
    
    number();
    
    std::cout << "Сумма цифр " << D2 << "+" << D1 << "+" << D0 << " = ";
    std::cout << D2 + D1 +  D0 << std::endl;
    
    schet();
  
}
