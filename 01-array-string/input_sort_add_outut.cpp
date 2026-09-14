#include <iostream>
#include <map>

int main ()
{
    std::map<int , int> num;
    int n {};
    std::cin >> n;
    for (int i {0} ; i < n ; i++)
    {
        int x {};
        int y {};
        std::cin >> x >> y ;
        if (num.contains(x))
        {
            int value = num.find(x) -> second;
            value += y;
            num[x] = value ;
            continue;
        }
        num.insert({ x , y });
    }
    for (auto i : num)
    {
        std::cout << i.first << ' ' << i.second << ' ';
    }
    std::cout << '\n';
    return 0;
}