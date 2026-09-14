#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

int main()
{
    std::string line{};
    std::cin >> line;
    std::map<char , int> str;
    for (auto i : line)
    {
        ++str[i];
    }

    int min{(*str.begin()).second};
    char n{};
    std::vector<char> delete_char;

    for (auto i : str)
    {
        if(i.second < min)
        {
            min = i.second;
        }
    }

    for (auto i : str)
    {
        if(i.second == min)
        {
            delete_char.push_back(i.first);
        }
    }
    for (auto i : delete_char)
    {
        line.erase(std::remove(line.begin() , line.end() , i) , line.end());
    }
    std::cout << line << '\n';
    return 0;
}