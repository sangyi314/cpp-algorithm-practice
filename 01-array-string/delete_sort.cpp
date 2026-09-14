#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

int main ()
{
    int n{};
    std::cin >> n;
    int value {};
    std::unordered_set<int> num;
    for (int i{0} ; i < n ; i++)
    {
        std::cin >> value;
        num.insert(value);
    }
    std::vector<int> sort_num;
    for (int i : num)
    {
        sort_num.push_back(i);
    }

    std::sort(sort_num.begin() , sort_num.end());

    for (int i : sort_num)
    {
        std::cout << i << '\n';
    }
    return 0;
}