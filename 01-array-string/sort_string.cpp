#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector str {"bbb" , "a" , "cc" , "aa"};
    std::sort(str.begin() , str.end() , [](std::string_view x , std::string_view y){
        if (x.size() == y.size())
        {
            return x < y ;
        }
        return x.size() < y.size();
    });

    for (std::string_view i : str)
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';
    return 0;
}