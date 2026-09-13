#include <iostream>
#include <string>
#include <limits>

int main ()
{
    std::ios::sync_with_stdio(false) ;
    std::cin.tie(nullptr) ;
    
    int n {0};

    std::cin >> n;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max() , '\n');

    for (int i{0} ; i < n ; ++i)
    {
        std::string line{};
        getline(std::cin , line);
        std::cout << line.length() << '\n';
    }
    return 0 ;
}