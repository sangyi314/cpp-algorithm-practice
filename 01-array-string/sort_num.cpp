#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector num{5 , 2 , 5 , 1 };
    std::sort(num.begin() , num.end()) ;
    for (int i : num)
    {
        std::cout << i ;
    }
    std::cout << '\n';

    std::sort(num.begin() , num.end() , [](int a , int b){
        return a > b ;
    });

    for (int i : num)
    {
        std::cout << i ;
    }
    std::cout << '\n';

    return 0;
}