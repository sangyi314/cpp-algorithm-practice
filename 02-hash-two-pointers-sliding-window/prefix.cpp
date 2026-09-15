#include <iostream>
#include <vector>

int main ()
{
    std::vector<int> num {-2 , 0 , 3 , -5 , 2 , -1};
    std::vector<long long> prefix( 6+1 , 0);
    for(int i {0} ; i < 6 ; i++)
    {
        prefix[ i + 1 ] = prefix[i] + num[i] ;
    }

    int q {3};
    while (q--)
    {
        int l{};
        int r{};
        std::cin >> l >> r ;
        std::cout << prefix[r+1] - prefix[l] << '\n';
    }
    







    return 0 ;
}