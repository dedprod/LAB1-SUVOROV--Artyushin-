#include <iostream>
#include <cmath>
using namespace std;
int w;
int h;
int idealw;
void calc()
{
idealw = h - 100;
    if ((w > 0) & (h > 0))
    {
        if (w == idealw)
        {
            std::cout << "Вы находитесь в идеальном весе." << std::endl;
        }
        else
        {
            if (w < idealw)
            {
                std::cout << "Поправляйтесь.До идеального веса вам:" << idealw - w << std::endl;
            }
            else
            {
                std::cout << "Худейте. До идеального веса вам: " << w - idealw << std::endl;
            }
        }
    }
}
int main()
{
    std::cout << "Введите вес." << std::endl;
    std::cin >> w;
    std::cout << "Введите рост." << std::endl;
    std::cin >> h;
    calc();

    return 0;
}
