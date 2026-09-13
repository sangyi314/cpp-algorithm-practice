#include <iostream>

int main ()
{
    std::ios::sync_with_stdio(false) ;
    std::cin.tie(nullptr) ;

    int x{0} ;
    int y {0};

    while (std::cin >> x >> y )

    {
        std::cout << x + y << '\n';
    }
    return 0;
}