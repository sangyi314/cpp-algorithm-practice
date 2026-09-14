#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main()
{
    std::string line{};
    std::cin >> line ;
    std::istringstream line2{line};
    std::vector<int> num;
    std::string part{};
    while(std::getline(line2 , part , ','))
    {
        int i = std::stoi(part);
        num.push_back(i);
    }
    int sum {};
    for (int i : num)
    {
        sum += i;
    }
    std::cout << sum << '\n';
    return 0;
}