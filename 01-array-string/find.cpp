#include <iostream>
#include <unordered_map>

int main()
{
    int n {0};
    long long target{0};
    std::cin >> n >> target ;
    std::unordered_map<long long , int > num ;
    for (int i {0}; i < n ; i++)
    {
        int value{};
        std::cin >> value ;
        long long needed {target - value};
        const auto it {num.find(needed)};
        if (it != num.end())
        {
            std::cout << it -> second << ' ' << i << '\n';
            return 0;
        }
        num[value] = i ;
    }
    std::cout << "-1" << '\n';
    return 0;
}